/********************************************************************************
** Form generated from reading UI file 'pageoffres.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEOFFRES_H
#define UI_PAGEOFFRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageoffres
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLineEdit *id_offre;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *titre_o;
    QLabel *label_6;
    QLineEdit *localisation_o;
    QLabel *label_5;
    QLineEdit *date_pub_o;
    QTableView *tab_offres;
    QLabel *label_21;
    QLineEdit *description_o;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QLabel *label_12;
    QLabel *label_11;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier;
    QPushButton *pb_supprimer;
    QLineEdit *lineEdit;
    QPushButton *refrech_pb;
    QPushButton *search;
    QRadioButton *radioButton_3;
    QWidget *lab_chart_pie;
    QPushButton *locaasc;
    QComboBox *statut_o;
    QLabel *label_10;
    QPushButton *condpb;
    QPushButton *historique;
    QPushButton *stat;
    QPushButton *pb_pdf;

    void setupUi(QDialog *pageoffres)
    {
        if (pageoffres->objectName().isEmpty())
            pageoffres->setObjectName(QStringLiteral("pageoffres"));
        pageoffres->resize(1829, 862);
        tabWidget = new QTabWidget(pageoffres);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(240, -30, 1861, 1011));
        tabWidget->setStyleSheet(QLatin1String("/* Style for QRadioButton */\n"
"QRadioButton {\n"
"    color: white; /* Text color for radio buttons */\n"
"    font-size: 16px; /* Font size */\n"
"    font-weight: bold; /* Bold text */\n"
"    margin: 5px; /* Margin around radio buttons */\n"
"}\n"
"\n"
"/* Style for QLabel (text label) */\n"
"QLabel {\n"
"    color: black; /* Text color for labels */\n"
"    font-size: 16px; /* Font size */\n"
"    font-weight: bold; /* Bold text */\n"
"    margin: 5px; /* Margin around labels */\n"
"}\n"
"\n"
"/* Style for QPushButton */\n"
"QPushButton {\n"
"    background-color: #3498db; /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Darker blue border */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px 10px; /* Padding inside buttons */\n"
"    color: white; /* Text color on buttons */\n"
"}\n"
"\n"
"/* Additional styling for better appearance */\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Darker blue on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    b"
                        "ackground-color: #21618c; /* Even darker blue when pressed */\n"
"}\n"
"\n"
"/* Style for QTabWidget */\n"
"QTabWidget {\n"
"    color: white; /* Text color for tab widget */\n"
"    font: 10pt \"Bebas Neue\"; /* Font style and size */\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QStringLiteral(""));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-40, 0, 1861, 891));
        groupBox->setStyleSheet(QLatin1String("\n"
"/* Style for QGroupBox */\n"
"QRadioButton{ color: white; /* Text color for labels */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}\n"
"QComboBox {\n"
"    background-color: #2980b9; /* Darker blue color for the combobox */\n"
"    border: 1px solid #1c669a; /* Darker border color */\n"
"    border-radius: 5px; /* Border radius for the combobox */\n"
"    padding: 5px; /* Padding inside the combobox */\n"
"    color: black; /* Text color inside the combobox */\n"
"}\n"
"QLineEdit {\n"
"    background-color: #2980b9; /* Darker blue color for input boxes */\n"
"    border: 1px solid #1c669a; /* Even darker border color */\n"
"    border-radius: 5px; /* Border radius for input boxes */\n"
"    padding: 5px; /* Padding for input boxes */\n"
"    color: black; /* Text color inside input boxes */\n"
"}\n"
"\n"
"/* Style for QLabel (text label) */\n"
"QLabel {\n"
"    color: white; "
                        "/* Text color for labels */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}\n"
"\n"
"/* Style for QPushButton */\n"
"QPushButton {\n"
"    background-color: #3498db; /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Border color for buttons */\n"
"    border-radius: 5px; /* Border radius for buttons */\n"
"    padding: 5px 10px; /* Adjust padding as needed */\n"
"    color: white; /* Text color on buttons */\n"
"}\n"
"\n"
"/* Additional styling for better appearance */\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Darker blue on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #21618c; /* Even darker blue when pressed */\n"
"}\n"
"\n"
"/* Add more styles as needed for your specific application */\n"
""));
        id_offre = new QLineEdit(groupBox);
        id_offre->setObjectName(QStringLiteral("id_offre"));
        id_offre->setGeometry(QRect(60, 110, 401, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 610, 111, 41));
        label_4->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 15pt \"Bebas Neue\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 301, 41));
        label_2->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 15pt \"Bebas Neue\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 149, 191, 41));
        label_3->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 15pt \"Bebas Neue\";"));
        titre_o = new QLineEdit(groupBox);
        titre_o->setObjectName(QStringLiteral("titre_o"));
        titre_o->setGeometry(QRect(60, 200, 401, 31));
        titre_o->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 410, 241, 51));
        label_6->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 15pt \"Bebas Neue\";"));
        localisation_o = new QLineEdit(groupBox);
        localisation_o->setObjectName(QStringLiteral("localisation_o"));
        localisation_o->setGeometry(QRect(60, 470, 391, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 510, 221, 51));
        label_5->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 15pt \"Bebas Neue\";"));
        date_pub_o = new QLineEdit(groupBox);
        date_pub_o->setObjectName(QStringLiteral("date_pub_o"));
        date_pub_o->setGeometry(QRect(60, 570, 381, 31));
        tab_offres = new QTableView(groupBox);
        tab_offres->setObjectName(QStringLiteral("tab_offres"));
        tab_offres->setGeometry(QRect(600, 120, 881, 661));
        tab_offres->setStyleSheet(QStringLiteral(""));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(50, 250, 241, 41));
        label_21->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 15pt \"Bebas Neue\";"));
        description_o = new QLineEdit(groupBox);
        description_o->setObjectName(QStringLiteral("description_o"));
        description_o->setGeometry(QRect(60, 300, 401, 111));
        description_o->setStyleSheet(QStringLiteral(""));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(610, 20, 141, 41));
        radioButton->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: black;\n"
"font: 22pt \"Bebas Neue\";"));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(750, 10, 171, 61));
        radioButton_2->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        sortAscButton = new QPushButton(groupBox);
        sortAscButton->setObjectName(QStringLiteral("sortAscButton"));
        sortAscButton->setGeometry(QRect(600, 80, 301, 41));
        sortAscButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #2980b9; /* Darker blue background color */\n"
"    border: 1px solid #1c669a; /* Darker border color */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 8px 15px; /* Padding for the button */\n"
"    color: white; /* Text color */\n"
"    font-weight: bold; /* Bold text */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3498db; /* Slightly lighter blue when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1c669a; /* Even darker blue when pressed */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #bdc3c7; /* Gray color when disabled */\n"
"    color: #7f8c8d; /* Gray text when disabled */\n"
"}"));
        sortDescButton = new QPushButton(groupBox);
        sortDescButton->setObjectName(QStringLiteral("sortDescButton"));
        sortDescButton->setGeometry(QRect(900, 80, 281, 41));
        sortDescButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #2980b9; /* Darker blue background color */\n"
"    border: 1px solid #1c669a; /* Darker border color */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 8px 15px; /* Padding for the button */\n"
"    color: white; /* Text color */\n"
"    font-weight: bold; /* Bold text */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3498db; /* Slightly lighter blue when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1c669a; /* Even darker blue when pressed */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #bdc3c7; /* Gray color when disabled */\n"
"    color: #7f8c8d; /* Gray text when disabled */\n"
"}"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 0, 1501, 921));
        label_12->setStyleSheet(QStringLiteral("border-image: url(:/img/img/sports-nautiques.jpg);"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, -20, 2081, 991));
        label_11->setStyleSheet(QStringLiteral("border-image: url(:/img/img/qz.jfif);"));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(390, 760, 121, 71));
        pb_ajouter->setStyleSheet(QLatin1String("border-image: url(:/img/img/google-plus_9723940.png);\n"
"background-color: transparent; border: none;color: white;"));
        pb_ajouter->setIconSize(QSize(20, 20));
        pb_modifier = new QPushButton(groupBox);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(250, 760, 121, 71));
        pb_modifier->setStyleSheet(QLatin1String("border-image: url(:/img/img/3597075.png);\n"
"background-color: transparent; border: none;color: white;"));
        pb_modifier->setIconSize(QSize(20, 20));
        pb_supprimer = new QPushButton(groupBox);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(90, 760, 121, 71));
        pb_supprimer->setStyleSheet(QLatin1String("border-image: url(:/img/img/delete_10257834.png);\n"
"background-color: transparent; border: none;color: white;"));
        pb_supprimer->setIconSize(QSize(20, 20));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1110, 20, 361, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color: #f0f0f0;\n"
"border: 5px solid #ccc;\n"
"padding: 5px;\n"
"border: 1px solid #0078d7;\n"
"font: 12pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        refrech_pb = new QPushButton(groupBox);
        refrech_pb->setObjectName(QStringLiteral("refrech_pb"));
        refrech_pb->setGeometry(QRect(1500, 10, 101, 111));
        refrech_pb->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"border-image: url(:/img/img/load.png);\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        refrech_pb->setIconSize(QSize(20, 20));
        search = new QPushButton(groupBox);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(1430, 20, 41, 41));
        search->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon);
        search->setIconSize(QSize(16, 16));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(950, 20, 121, 41));
        radioButton_3->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        lab_chart_pie = new QWidget(groupBox);
        lab_chart_pie->setObjectName(QStringLiteral("lab_chart_pie"));
        lab_chart_pie->setGeometry(QRect(630, 170, 591, 581));
        locaasc = new QPushButton(groupBox);
        locaasc->setObjectName(QStringLiteral("locaasc"));
        locaasc->setGeometry(QRect(1180, 80, 301, 41));
        locaasc->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #2980b9; /* Darker blue background color */\n"
"    border: 1px solid #1c669a; /* Darker border color */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 8px 15px; /* Padding for the button */\n"
"    color: white; /* Text color */\n"
"    font-weight: bold; /* Bold text */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3498db; /* Slightly lighter blue when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1c669a; /* Even darker blue when pressed */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #bdc3c7; /* Gray color when disabled */\n"
"    color: #7f8c8d; /* Gray text when disabled */\n"
"}"));
        statut_o = new QComboBox(groupBox);
        statut_o->setObjectName(QStringLiteral("statut_o"));
        statut_o->setGeometry(QRect(60, 670, 391, 51));
        lab_chart_pie->raise();
        label_12->raise();
        label_11->raise();
        label_2->raise();
        label_3->raise();
        titre_o->raise();
        label_6->raise();
        localisation_o->raise();
        id_offre->raise();
        label_4->raise();
        label_5->raise();
        date_pub_o->raise();
        tab_offres->raise();
        label_21->raise();
        description_o->raise();
        radioButton->raise();
        radioButton_2->raise();
        sortAscButton->raise();
        sortDescButton->raise();
        pb_ajouter->raise();
        pb_modifier->raise();
        pb_supprimer->raise();
        lineEdit->raise();
        refrech_pb->raise();
        search->raise();
        radioButton_3->raise();
        locaasc->raise();
        statut_o->raise();
        tabWidget->addTab(tab, QString());
        label_10 = new QLabel(pageoffres);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, -40, 1851, 911));
        label_10->setStyleSheet(QStringLiteral("border-image: url(:/img/img/R (1).jfif);"));
        condpb = new QPushButton(pageoffres);
        condpb->setObjectName(QStringLiteral("condpb"));
        condpb->setGeometry(QRect(30, 40, 201, 221));
        QFont font;
        font.setFamily(QStringLiteral("Bebas Neue"));
        font.setPointSize(20);
        condpb->setFont(font);
        condpb->setStyleSheet(QStringLiteral("border-image: url(:/img/img/6449076.png);"));
        condpb->setIconSize(QSize(40, 40));
        historique = new QPushButton(pageoffres);
        historique->setObjectName(QStringLiteral("historique"));
        historique->setGeometry(QRect(60, 710, 141, 51));
        historique->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        stat = new QPushButton(pageoffres);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(40, 630, 181, 41));
        stat->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_pdf = new QPushButton(pageoffres);
        pb_pdf->setObjectName(QStringLiteral("pb_pdf"));
        pb_pdf->setGeometry(QRect(50, 510, 151, 51));
        pb_pdf->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        label_10->raise();
        tabWidget->raise();
        condpb->raise();
        stat->raise();
        historique->raise();
        pb_pdf->raise();

        retranslateUi(pageoffres);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pageoffres);
    } // setupUi

    void retranslateUi(QDialog *pageoffres)
    {
        pageoffres->setWindowTitle(QApplication::translate("pageoffres", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        id_offre->setPlaceholderText(QApplication::translate("pageoffres", "Numbers only", Q_NULLPTR));
        label_4->setText(QApplication::translate("pageoffres", "statut", Q_NULLPTR));
        label_2->setText(QApplication::translate("pageoffres", "id offre", Q_NULLPTR));
        label_3->setText(QApplication::translate("pageoffres", "titre", Q_NULLPTR));
        titre_o->setPlaceholderText(QApplication::translate("pageoffres", "Characters only", Q_NULLPTR));
        label_6->setText(QApplication::translate("pageoffres", "localisation", Q_NULLPTR));
        localisation_o->setPlaceholderText(QString());
        label_5->setText(QApplication::translate("pageoffres", "date pub", Q_NULLPTR));
        date_pub_o->setPlaceholderText(QApplication::translate("pageoffres", "YYYY-MM-DD", Q_NULLPTR));
        label_21->setText(QApplication::translate("pageoffres", "description", Q_NULLPTR));
        description_o->setPlaceholderText(QString());
        radioButton->setText(QApplication::translate("pageoffres", "titre", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("pageoffres", "localisation", Q_NULLPTR));
        sortAscButton->setText(QApplication::translate("pageoffres", "ASCendant", Q_NULLPTR));
        sortDescButton->setText(QApplication::translate("pageoffres", "DESCendant", Q_NULLPTR));
        label_12->setText(QString());
        label_11->setText(QString());
        pb_ajouter->setText(QString());
        pb_modifier->setText(QString());
        pb_supprimer->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("pageoffres", "Search", Q_NULLPTR));
        refrech_pb->setText(QString());
        search->setText(QString());
        radioButton_3->setText(QApplication::translate("pageoffres", "id", Q_NULLPTR));
        locaasc->setText(QApplication::translate("pageoffres", "asc localisation", Q_NULLPTR));
        statut_o->clear();
        statut_o->insertItems(0, QStringList()
         << QApplication::translate("pageoffres", "Actif", Q_NULLPTR)
         << QApplication::translate("pageoffres", "Non-Actif", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_10->setText(QString());
        condpb->setText(QString());
        historique->setText(QApplication::translate("pageoffres", "Historique", Q_NULLPTR));
        stat->setText(QApplication::translate("pageoffres", "Statut", Q_NULLPTR));
        pb_pdf->setText(QApplication::translate("pageoffres", "pdf", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pageoffres: public Ui_pageoffres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEOFFRES_H
