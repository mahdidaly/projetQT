#include "pageoffres.h"
#include "ui_pageoffres.h"
#include<QLabel>
#include<QMessageBox>
#include<QVBoxLayout>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSqlQueryModel>
#include<QApplication>
#include <iostream>
#include<QIntValidator>
#include<QBoxLayout>
#include<QLineEdit>
#include<QComboBox>
#include<QMessageBox>
#include <QApplication>
#include <QDebug>
#include<QWidget>
#include <offres.h>
#include "pagecond.h"
#include <QSortFilterProxyModel>
#include <QPrinter>
#include <QPainter>
#include<QSqlRecord>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QDesktopServices>
#include <QTextDocumentWriter>
#include <QtCharts>
#include<QtCharts>
#include<QChartView>
#include<QPieSeries>
#include <cstdlib>
#include <ctime>
#include <QFile>
#include <QPrintDialog>
#include <QTimer>


pageoffres::pageoffres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pageoffres),
    selectedoffreRow(-1), // Initialize selectedoffreseRow
    O(new offres()),
    proxyModel(new QSortFilterProxyModel(this)),
    showLabel(true)


{


    ui->setupUi(this);


    ui->id_offre->setValidator(new QIntValidator(0, 99999999, this));

    // Create the model with three columns: one for each header and an empty column for spacing













    Stat();



    // Assuming afficher() returns a QSqlQueryModel
    QSqlQueryModel *model = O->afficher();
    proxyModel->setSourceModel(model);

    QStandardItemModel *standardModel = new QStandardItemModel(model->rowCount(), model->columnCount(), this);

    // Set the horizontal header names to match the database column names
    for (int col = 0; col < model->columnCount(); ++col) {
        standardModel->setHorizontalHeaderItem(col, new QStandardItem(model->headerData(col, Qt::Horizontal).toString()));
    }

    // Populate the table with data
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount(); ++col) {
            QModelIndex index = model->index(row, col);
            QString data = model->data(index).toString();
            QStandardItem *item = new QStandardItem(data);
            standardModel->setItem(row, col, item);
        }
    }

    ui->tab_offres->setModel(standardModel);

    // In pageoffres constructor or initialization
    refreshTimer = new QTimer(this);
       connect(refreshTimer, &QTimer::timeout, this, &pageoffres::Stat);
       refreshTimer->start(5000);


    connect(ui->tab_offres->selectionModel(), SIGNAL(currentRowChanged(QModelIndex, QModelIndex)),
            this, SLOT(on_tableViewSelectionChanged(QModelIndex, QModelIndex)));
}

pageoffres::~pageoffres()
{
    delete ui;
    delete O;
}

void pageoffres::on_pb_ajouter_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Are you sure you want to add?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);

    int reply = msgBox.exec();
    if (reply == QMessageBox::Cancel) {
        return;
    }
    int id_offre = ui->id_offre->text().toInt();
    QString titre_o = ui->titre_o->text();
    QString description_o = ui->description_o->text();
    QString localisation_o = ui->localisation_o->text();
    QString date_pub_o = ui->date_pub_o->text();
    QString statut_o = ui->statut_o->currentText();


    if (ui->id_offre->text().isEmpty() || ui->titre_o->text().isEmpty()
        || ui->description_o->text().isEmpty() || ui->localisation_o->text().isEmpty()
        || ui->date_pub_o->text().isEmpty() || ui->statut_o->currentText().isEmpty()) {
        QMessageBox::warning(this, tr("Champs manquants"),
                             tr("Veuillez remplir tous les champs."), QMessageBox::Ok);
        return;
    }
    // Date Format Validation
    QDate date;
    if (!date.fromString(date_pub_o, "yyyy-MM-dd").isValid()) {
        QMessageBox::warning(this, tr("Format de date incorrect"),
                             tr("Le format de la date de naissance est incorrect. Utilisez le format yyyy-MM-dd."), QMessageBox::Ok);
        return;
    }



    QRegularExpression characterRegex("^[a-zA-Zéèêëàâäîïôöûüç -]*$");

       // Input control for titre_o
       if (!characterRegex.match(titre_o).hasMatch()) {
           QMessageBox::warning(this, tr("Caractères invalides dans le titre"),
                                tr("Veuillez utiliser uniquement des caractères alphabétiques pour le titre."), QMessageBox::Ok);
           return;
       }

       // Input control for description_o
       if (!characterRegex.match(description_o).hasMatch()) {
           QMessageBox::warning(this, tr("Caractères invalides dans la description"),
                                tr("Veuillez utiliser uniquement des caractères alphabétiques pour la description."), QMessageBox::Ok);
           return;
       }

       // Input control for localisation_o
       if (!characterRegex.match(localisation_o).hasMatch()) {
           QMessageBox::warning(this, tr("Caractères invalides dans la localisation"),
                                tr("Veuillez utiliser uniquement des caractères alphabétiques pour la localisation."), QMessageBox::Ok);
           return;
       }
    offres o(id_offre, titre_o, description_o, localisation_o, date_pub_o, statut_o);
    bool test = o.ajouter();
    if (test)
    {
        ui->tab_offres->setModel(o.afficher());

        QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                           QObject::tr("Ajout effectué. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
    else
    {
        QMessageBox msgBox(QMessageBox::Critical, QObject::tr("NOT OK"),
                           QObject::tr("Ajout non effectué. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
}

void pageoffres::on_pb_supprimer_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Are you sure you want to delete?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);

    int reply = msgBox.exec();
    if (reply == QMessageBox::Cancel) {
        return;
    }
    offres E;

    int id_offre = ui->id_offre->text().toInt();
    O->setid_offre(id_offre);

    bool exists = O->checkIfoffresExists(id_offre);
    if (!exists) {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("ID n'a pas été trouvé dans la base de données.").arg(id_offre),
                              QMessageBox::Cancel);
        return;
    }

    bool test = O->supprimer(id_offre);
    if (test)
    {
        QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                           QObject::tr("Suppression effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();

        ui->tab_offres->setModel(O->afficher());

    }
    else
    {
        QMessageBox msgBox(QMessageBox::Critical, QObject::tr("Erreur"),
                           QObject::tr("Suppression non effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
}

void pageoffres::on_pb_modifier_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Are you sure you want to modify?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);

    int reply = msgBox.exec();
    if (reply == QMessageBox::Cancel) {
        return;
    }

    if (selectedoffreRow == -1) {
        // No offrese selected
        QMessageBox::warning(this, tr("Aucun employé sélectionné"),
                             tr("Veuillez sélectionner un employé à modifier."), QMessageBox::Ok);
        return;
    }

    int id_offre = ui->id_offre->text().toInt();
    QString titre_o = ui->titre_o->text();
    QString description_o = ui->description_o->text();
    QString localisation_o = ui->localisation_o->text();
    QString date_pub_o = ui->date_pub_o->text();
    QString statut_o = ui->statut_o->currentText();


    if (ui->id_offre->text().isEmpty() || ui->titre_o->text().isEmpty()
        || ui->description_o->text().isEmpty() || ui->localisation_o->text().isEmpty()
        || ui->date_pub_o->text().isEmpty() || ui->statut_o->currentText().isEmpty()) {
        QMessageBox::warning(this, tr("Champs manquants"),
                             tr("Veuillez remplir tous les champs."), QMessageBox::Ok);
        return;
    }
    if (statut_o.isEmpty()) {
            statut_o = "Actif";
            ui->statut_o->setCurrentText(statut_o);
        }
    QRegularExpression characterRegex("^[a-zA-Zéèêëàâäîïôöûüç -]*$");

       // Input control for titre_o
       if (!characterRegex.match(titre_o).hasMatch()) {
           QMessageBox::warning(this, tr("Caractères invalides dans le titre"),
                                tr("Veuillez utiliser uniquement des caractères alphabétiques pour le titre."), QMessageBox::Ok);
           return;
       }

       // Input control for description_o
       if (!characterRegex.match(description_o).hasMatch()) {
           QMessageBox::warning(this, tr("Caractères invalides dans la description"),
                                tr("Veuillez utiliser uniquement des caractères alphabétiques pour la description."), QMessageBox::Ok);
           return;
       }

       // Input control for localisation_o
       if (!characterRegex.match(localisation_o).hasMatch()) {
           QMessageBox::warning(this, tr("Caractères invalides dans la localisation"),
                                tr("Veuillez utiliser uniquement des caractères alphabétiques pour la localisation."), QMessageBox::Ok);
           return;
       }
    offres o(id_offre, titre_o, description_o, localisation_o, date_pub_o, statut_o);
    bool test = o.modifier(id_offre); // Pass cin_e instead of selectedoffreRow
    if (test)
    {
        ui->tab_offres->setModel(o.afficher());

        QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                           QObject::tr("Modification effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, &QMessageBox::finished, this, &pageoffres::handleMessageBoxResult);

        msgBox.exec();
    }
    else
    {
        QMessageBox msgBox(QMessageBox::Critical, QObject::tr("Erreur"),
                           QObject::tr("offres non trouvé ou modification non effectuée\nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
}

void pageoffres::handleMessageBoxResult(int result)
{
    if (result == QMessageBox::Cancel)
    {
        // User clicked Cancel, do something if needed
    }
}


void pageoffres::on_tableViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);

    // Get the selected row
    selectedoffreRow = current.row();

    // Fill the line edits with the data from the selected row
    ui->id_offre->setText(ui->tab_offres->model()->index(selectedoffreRow, 0).data().toString());
    ui->titre_o->setText(ui->tab_offres->model()->index(selectedoffreRow, 1).data().toString());
    ui->description_o->setText(ui->tab_offres->model()->index(selectedoffreRow, 2).data().toString());
    ui->localisation_o->setText(ui->tab_offres->model()->index(selectedoffreRow, 3).data().toString());
    ui->date_pub_o->setText(ui->tab_offres->model()->index(selectedoffreRow, 4).data().toString());
    ui->statut_o->setCurrentText(ui->tab_offres->model()->index(selectedoffreRow, 5).data().toString());

        QSqlQuery query;


        }





void pageoffres::on_condpb_clicked()
{
    close();
  pagecond = new Pagecond(this);
  pagecond->show();
}


void pageoffres::on_radioButton_clicked()
{
    // Clear the existing proxy model
    delete proxyModel;
    proxyModel = nullptr;

    // Create a new proxy model
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(O->afficher());

    // Set the filter case sensitivity based on the radio button state
    Qt::CaseSensitivity caseSensitivity = ui->radioButton->isChecked() ?
                                              Qt::CaseInsensitive : Qt::CaseSensitive;
    proxyModel->setFilterCaseSensitivity(caseSensitivity);

    // Set the filter key column (in this case, the column for "titre")
    proxyModel->setFilterKeyColumn(1);

    // Set the proxy model for the table view
    ui->tab_offres->setModel(proxyModel);
}

void pageoffres::on_radioButton_2_clicked()
{
    // Clear the existing proxy model
    delete proxyModel;
    proxyModel = nullptr;

    // Create a new proxy model
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(O->afficher());

    // Set the filter case sensitivity based on the radio button state
    Qt::CaseSensitivity caseSensitivity = ui->radioButton_2->isChecked() ?
                                              Qt::CaseInsensitive : Qt::CaseSensitive;
    proxyModel->setFilterCaseSensitivity(caseSensitivity);

    // Set the filter key column (in this case, the column for "localisation")
    proxyModel->setFilterKeyColumn(3);

    // Set the proxy model for the table view
    ui->tab_offres->setModel(proxyModel);
}

void pageoffres::on_radioButton_3_clicked()
{
    // Clear the existing proxy model
    delete proxyModel;
    proxyModel = nullptr;

    // Create a new proxy model
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(O->afficher());

    // Set the filter case sensitivity based on the radio button state
    Qt::CaseSensitivity caseSensitivity = ui->radioButton_3->isChecked() ?
                                              Qt::CaseInsensitive : Qt::CaseSensitive;
    proxyModel->setFilterCaseSensitivity(caseSensitivity);

    // Set the filter key column (in this case, the column for "id")
    proxyModel->setFilterKeyColumn(0);

    // Set the proxy model for the table view
    ui->tab_offres->setModel(proxyModel);
}
void pageoffres::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    // Update the filter based on the contents of the line edit
    if (proxyModel != nullptr)
    {
        proxyModel->setFilterRegExp(ui->lineEdit->text());
    }
}

void pageoffres::on_sortAscButton_clicked()
{
    QSqlQueryModel *sortedModel = O->sortByIdAsc();
    ui->tab_offres->setModel(sortedModel);
}

void pageoffres::on_sortDescButton_clicked()
{
    QSqlQueryModel *sortedModel = O->sortByIdDesc();
    ui->tab_offres->setModel(sortedModel);
}


void pageoffres::on_locaasc_clicked()
{
    // Create a new QSqlQueryModel
    QSqlQueryModel *sortedModel = new QSqlQueryModel(this);

    // Set the query to sort by 'localisation_o' in ascending order
    sortedModel->setQuery("SELECT * FROM offres ORDER BY localisation_o ASC");

    // Update the table view with the sorted model
    ui->tab_offres->setModel(sortedModel);
}



void pageoffres::on_pb_pdf_clicked()
{
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", QString(), "PDF Files (*.pdf)");
    if (fileName.isEmpty())
        return;
    printer.setOutputFileName(fileName);

    // Create a painter
    QPainter painter;
    if (!painter.begin(&printer))
    {
        QMessageBox::warning(this, "Warning", "Failed to open PDF file for writing.");
        return;
    }

    // Get the model from the table view
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tab_offres->model());
    if (!model)
    {
        QMessageBox::warning(this, "Warning", "Failed to retrieve table model.");
        return;
    }

    // Set up font and metrics
    QFont font = painter.font();
    font.setPointSize(10); // Adjust as needed
    painter.setFont(font);
    QFontMetrics fontMetrics(font);

    // Calculate cell width and height
    int cellWidth = 120; // Adjust as needed
    int cellHeight = fontMetrics.height() + 5; // Add some extra space for better readability

    // Draw headers
    painter.setPen(Qt::black);
    for (int column = 0; column < model->columnCount(); ++column)
    {
        QString headerText = model->headerData(column, Qt::Horizontal, Qt::DisplayRole).toString();
        QRect headerRect(column * cellWidth, 0, cellWidth, cellHeight);
        painter.drawText(headerRect, Qt::AlignCenter, headerText);
    }

    // Draw grid lines and cell contents
    for (int row = 0; row < model->rowCount(); ++row)
    {
        for (int column = 0; column < model->columnCount(); ++column)
        {
            QModelIndex index = model->index(row, column);
            QString text = model->data(index, Qt::DisplayRole).toString();

            // Draw text in the current cell
            QRect cellRect(column * cellWidth, (row + 1) * cellHeight, cellWidth, cellHeight);
            painter.drawText(cellRect, Qt::AlignLeft | Qt::AlignVCenter, text);

            // Draw horizontal grid lines
            painter.drawLine(0, (row + 1) * cellHeight, model->columnCount() * cellWidth, (row + 1) * cellHeight);
        }
    }

    // Draw vertical grid lines
    for (int column = 0; column < model->columnCount() + 1; ++column)
    {
        painter.drawLine(column * cellWidth, 0, column * cellWidth, (model->rowCount() + 1) * cellHeight);
    }

    // End painting
    painter.end();

    QMessageBox::information(this, "PDF Created", "PDF file has been successfully created.");
}






void pageoffres::on_refrech_pb_clicked()
{
    // Clear the line edits
    ui->id_offre->clear();
    ui->titre_o->clear();
    ui->description_o->clear();
    ui->localisation_o->clear();
    ui->date_pub_o->clear();



    // Reset selectedoffreRow to -1
    selectedoffreRow = -1;

    // Optionally, re-enable the signal-slot connection for handling selection changes
    connect(ui->tab_offres->selectionModel(), SIGNAL(currentRowChanged(QModelIndex, QModelIndex)),
            this, SLOT(on_tableViewSelectionChanged(QModelIndex, QModelIndex)));
}



void pageoffres::Stat()
{
    QSqlQuery qActif, qNonActif;
    qreal total = 0, nombreActif = 0, nombreNonActif = 0;

    // Exécuter les requêtes pour obtenir les comptes des offres Actif et Non-Actif
    if (!qActif.exec("SELECT COUNT(*) FROM offres WHERE statut_o = 'Actif'")) {
        qDebug() << "Erreur lors de l'exécution de la requête qActif:" << qActif.lastError().text();
        return;
    }
    if (!qNonActif.exec("SELECT COUNT(*) FROM offres WHERE statut_o = 'Non-Actif'")) {
        qDebug() << "Erreur lors de l'exécution de la requête qNonActif:" << qNonActif.lastError().text();
        return;
    }

    // Récupérer les comptes
    if (qActif.next()) {
        nombreActif = qActif.value(0).toDouble();
    }
    if (qNonActif.next()) {
        nombreNonActif = qNonActif.value(0).toDouble();
    }

    // Calculer le total
    total = nombreActif + nombreNonActif;

    // Calculer les pourcentages
    qreal pourcentageActif = (total != 0) ? nombreActif / total : 0;
    qreal pourcentageNonActif = (total != 0) ? nombreNonActif / total : 0;

    // Créer la série
    QPieSeries *serie = new QPieSeries();
    serie->setHoleSize(0.35);

    // Ajouter les tranches
    QPieSlice *trancheActif = serie->append("Actif", pourcentageActif);
    QPieSlice *trancheNonActif = serie->append("Non-Actif", pourcentageNonActif);

    // Définir les couleurs des tranches
    trancheActif->setBrush(QColor("#4CAF50")); // Couleur verte pour Actif
    trancheNonActif->setBrush(QColor("#F44336")); // Couleur rouge pour Non-Actif

    // Configurer le graphique
    QChart *graphique = new QChart();
    graphique->addSeries(serie);
    graphique->setAnimationOptions(QChart::SeriesAnimations);
    graphique->setTitle("Répartition par statut");

    // Configurer la vue du graphique
    QChartView *vueGraphique = new QChartView(graphique, ui->lab_chart_pie);
    vueGraphique->setRenderHint(QPainter::Antialiasing);
    vueGraphique->setMinimumSize(600, 600);
    vueGraphique->show();
}

void pageoffres::on_stat_clicked()
{
    QDialog *dialog = new QDialog(this);
    QVBoxLayout *layout = new QVBoxLayout(dialog);

    // Call Stat_emp() to display the statistics
    Stat();

    // Add your chart view to the layout
    layout->addWidget(ui->lab_chart_pie); // Assuming lab_chart_pie is the chart view for Stat_emp()

    // Optionally, set dialog properties such as window title and size
    dialog->setWindowTitle("offre Statistics");
    dialog->resize(800, 600); // Adjust size as needed

    // Show the dialog
    dialog->exec();
}










void pageoffres::on_historique_clicked()
{
    // Obtenir toutes les informations de la QTableView
    QString tableInfo;
    int rowCount = ui->tab_offres->model()->rowCount();
    int columnCount = ui->tab_offres->model()->columnCount();

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            QModelIndex index = ui->tab_offres->model()->index(i, j);
            tableInfo += ui->tab_offres->model()->data(index).toString() + "\t";
        }
        tableInfo += "\n";
    }

    // Afficher les informations dans une boîte de dialogue personnalisée
    QMessageBox msgBox;
    msgBox.setWindowTitle("Informations de la Table des Offres");
    msgBox.setText(tableInfo);
    msgBox.addButton(QMessageBox::Close);  // Ajouter un bouton de fermeture

    // Maximiser la fenêtre de la boîte de dialogue
    msgBox.showMaximized();

    // Déterminer l'action en fonction du bouton ou de l'action effectuée
    QString action;
    if (sender() == ui->pb_ajouter)
    {
        action = "Ajout d'une offre : " + tableInfo;
    }
    else if (sender() == ui->pb_supprimer)
    {
        action = "Suppression d'une offre : " + tableInfo;
    }
    else if (sender() == ui->pb_modifier)
    {
        action = "Modification d'une offre : " + tableInfo;
    }

    // Ajouter l'action à l'historique
    QPair<QDateTime, QString> actionPair(QDateTime::currentDateTime(), action);
    historique.append(actionPair);

    int result = msgBox.exec();

    // Vérifier si le bouton de fermeture a été cliqué
    if (result == QMessageBox::Close)
    {
        // Fermer uniquement la fenêtre actuelle
        close();
    }
}

void pageoffres::on_pushButton_clicked()
{
    ui->tab_offres->setModel(O->afficher());
}

void pageoffres::on_pushButton_2_clicked()
{
    close();
      pagecond = new Pagecond(this);
      pagecond->show();
}
