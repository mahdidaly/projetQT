/********************************************************************************
** Form generated from reading UI file 'pagecond.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGECOND_H
#define UI_PAGECOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pagecond
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tab_cond;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *cin_c;
    QLineEdit *nom_c;
    QLineEdit *prenom_c;
    QLabel *label_8;
    QLineEdit *id_offre;
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QLabel *QRCODE_3;
    QLabel *lab_chart;
    QLabel *lab_chart2;
    QLabel *label_32;
    QLineEdit *daten_c;
    QLineEdit *Nation_c;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier_2;
    QPushButton *pb_supprimer;
    QLineEdit *lineEdit;
    QPushButton *search;
    QPushButton *QR;
    QPushButton *refrech_pb;
    QLabel *label_6;
    QComboBox *genre_c;
    QRadioButton *radioButtonNom;
    QRadioButton *radioButtonPrenom;
    QRadioButton *radioButtonCin;
    QPushButton *nomasc;
    QLabel *label_7;
    QPushButton *employe3pb;
    QPushButton *pb_pdf;
    QPushButton *stat;
    QLabel *label_12;

    void setupUi(QDialog *Pagecond)
    {
        if (Pagecond->objectName().isEmpty())
            Pagecond->setObjectName(QStringLiteral("Pagecond"));
        Pagecond->resize(1670, 838);
        tabWidget = new QTabWidget(Pagecond);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(230, -30, 1481, 981));
        tabWidget->setStyleSheet(QLatin1String("\n"
"/* Style for QGroupBox */\n"
"QPushButton {\n"
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
"}\n"
"QComboBox {\n"
"    background-color: #2980b9; /* Darker blue color for the combobox */\n"
"    border: 1px solid #1c669a; /* Darker border color */\n"
"    border-radius: 5px; /* Border radius for the combobox */\n"
"    padding: 5px; /* Padding inside the combobox */\n"
""
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
"    color: white; /* Text color for labels */\n"
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
"    color: white; /* Text color on"
                        " buttons */\n"
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
"QTabWidget{\n"
"color: white;\n"
"font: 10pt \"Bebas Neue\";}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab_cond = new QTableWidget(tab);
        tab_cond->setObjectName(QStringLiteral("tab_cond"));
        tab_cond->setGeometry(QRect(428, 100, 651, 711));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 81, 41));
        label->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 12pt \"Bebas Neue\";"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 121, 41));
        label_2->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 12pt \"Bebas Neue\";"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 200, 181, 41));
        label_3->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 12pt \"Bebas Neue\";"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 590, 251, 41));
        label_4->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 12pt \"Bebas Neue\";"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 290, 171, 41));
        label_5->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 12pt \"Bebas Neue\";"));
        cin_c = new QLineEdit(tab);
        cin_c->setObjectName(QStringLiteral("cin_c"));
        cin_c->setGeometry(QRect(30, 90, 341, 31));
        nom_c = new QLineEdit(tab);
        nom_c->setObjectName(QStringLiteral("nom_c"));
        nom_c->setGeometry(QRect(30, 170, 341, 31));
        prenom_c = new QLineEdit(tab);
        prenom_c->setObjectName(QStringLiteral("prenom_c"));
        prenom_c->setGeometry(QRect(30, 240, 341, 31));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 370, 171, 41));
        label_8->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 12pt \"Bebas Neue\";"));
        id_offre = new QLineEdit(tab);
        id_offre->setObjectName(QStringLiteral("id_offre"));
        id_offre->setGeometry(QRect(30, 420, 341, 31));
        sortAscButton = new QPushButton(tab);
        sortAscButton->setObjectName(QStringLiteral("sortAscButton"));
        sortAscButton->setGeometry(QRect(428, 80, 221, 41));
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
        sortDescButton = new QPushButton(tab);
        sortDescButton->setObjectName(QStringLiteral("sortDescButton"));
        sortDescButton->setGeometry(QRect(650, 80, 211, 41));
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
        QRCODE_3 = new QLabel(tab);
        QRCODE_3->setObjectName(QStringLiteral("QRCODE_3"));
        QRCODE_3->setGeometry(QRect(1140, 120, 801, 601));
        lab_chart = new QLabel(tab);
        lab_chart->setObjectName(QStringLiteral("lab_chart"));
        lab_chart->setGeometry(QRect(430, 150, 631, 441));
        lab_chart2 = new QLabel(tab);
        lab_chart2->setObjectName(QStringLiteral("lab_chart2"));
        lab_chart2->setGeometry(QRect(430, 150, 721, 431));
        label_32 = new QLabel(tab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(-10, -20, 1951, 971));
        label_32->setStyleSheet(QStringLiteral("border-image: url(:/img/img/qz.jfif);"));
        daten_c = new QLineEdit(tab);
        daten_c->setObjectName(QStringLiteral("daten_c"));
        daten_c->setGeometry(QRect(30, 640, 331, 31));
        Nation_c = new QLineEdit(tab);
        Nation_c->setObjectName(QStringLiteral("Nation_c"));
        Nation_c->setGeometry(QRect(30, 330, 341, 31));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(310, 690, 121, 111));
        pb_ajouter->setStyleSheet(QLatin1String("border-image: url(:/img/img/google-plus_9723940.png);\n"
"background-color: transparent; border: none;color: white;"));
        pb_ajouter->setIconSize(QSize(20, 20));
        pb_modifier_2 = new QPushButton(tab);
        pb_modifier_2->setObjectName(QStringLiteral("pb_modifier_2"));
        pb_modifier_2->setGeometry(QRect(170, 690, 131, 111));
        pb_modifier_2->setStyleSheet(QLatin1String("border-image: url(:/img/img/3597075.png);\n"
"background-color: transparent; border: none;color: white;"));
        pb_modifier_2->setIconSize(QSize(20, 20));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(10, 690, 151, 111));
        pb_supprimer->setStyleSheet(QLatin1String("border-image: url(:/img/img/delete_10257834.png);\n"
"background-color: transparent; border: none;color: white;"));
        pb_supprimer->setIconSize(QSize(20, 20));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(790, 20, 281, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color: #f0f0f0;\n"
"border: 5px solid #ccc;\n"
"padding: 5px;\n"
"border: 1px solid #0078d7;\n"
"font: 12pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        search = new QPushButton(tab);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(1030, 20, 41, 41));
        search->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon);
        search->setIconSize(QSize(16, 16));
        QR = new QPushButton(tab);
        QR->setObjectName(QStringLiteral("QR"));
        QR->setGeometry(QRect(1170, 740, 241, 61));
        QR->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/qr.png"), QSize(), QIcon::Normal, QIcon::Off);
        QR->setIcon(icon1);
        QR->setIconSize(QSize(40, 40));
        refrech_pb = new QPushButton(tab);
        refrech_pb->setObjectName(QStringLiteral("refrech_pb"));
        refrech_pb->setGeometry(QRect(1100, 10, 121, 91));
        refrech_pb->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"border-image: url(:/img/img/load.png);\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        refrech_pb->setIconSize(QSize(20, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 490, 191, 41));
        label_6->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 12pt \"Bebas Neue\";"));
        genre_c = new QComboBox(tab);
        genre_c->setObjectName(QStringLiteral("genre_c"));
        genre_c->setGeometry(QRect(30, 540, 331, 31));
        radioButtonNom = new QRadioButton(tab);
        radioButtonNom->setObjectName(QStringLiteral("radioButtonNom"));
        radioButtonNom->setGeometry(QRect(430, 30, 101, 31));
        radioButtonNom->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        radioButtonPrenom = new QRadioButton(tab);
        radioButtonPrenom->setObjectName(QStringLiteral("radioButtonPrenom"));
        radioButtonPrenom->setGeometry(QRect(540, 20, 151, 41));
        radioButtonPrenom->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        radioButtonCin = new QRadioButton(tab);
        radioButtonCin->setObjectName(QStringLiteral("radioButtonCin"));
        radioButtonCin->setGeometry(QRect(710, 20, 71, 41));
        radioButtonCin->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        nomasc = new QPushButton(tab);
        nomasc->setObjectName(QStringLiteral("nomasc"));
        nomasc->setGeometry(QRect(860, 80, 221, 41));
        nomasc->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tabWidget->addTab(tab, QString());
        label_32->raise();
        lab_chart2->raise();
        lab_chart->raise();
        tab_cond->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        cin_c->raise();
        nom_c->raise();
        prenom_c->raise();
        label_8->raise();
        id_offre->raise();
        sortAscButton->raise();
        sortDescButton->raise();
        QRCODE_3->raise();
        daten_c->raise();
        Nation_c->raise();
        pb_ajouter->raise();
        pb_modifier_2->raise();
        pb_supprimer->raise();
        lineEdit->raise();
        search->raise();
        QR->raise();
        refrech_pb->raise();
        label_6->raise();
        genre_c->raise();
        radioButtonNom->raise();
        radioButtonPrenom->raise();
        radioButtonCin->raise();
        nomasc->raise();
        label_7 = new QLabel(Pagecond);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-370, -60, 2261, 931));
        label_7->setStyleSheet(QStringLiteral("border-image: url(:/img/img/R (1).jfif);"));
        employe3pb = new QPushButton(Pagecond);
        employe3pb->setObjectName(QStringLiteral("employe3pb"));
        employe3pb->setGeometry(QRect(30, 60, 181, 171));
        QFont font;
        font.setFamily(QStringLiteral("Bebas Neue"));
        font.setPointSize(20);
        employe3pb->setFont(font);
        employe3pb->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: black;\n"
"border-image: url(:/img/img/6140334.png);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/415287996_755433109383168_7582230033290630906_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        employe3pb->setIcon(icon2);
        employe3pb->setIconSize(QSize(40, 40));
        pb_pdf = new QPushButton(Pagecond);
        pb_pdf->setObjectName(QStringLiteral("pb_pdf"));
        pb_pdf->setGeometry(QRect(40, 350, 141, 81));
        pb_pdf->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        stat = new QPushButton(Pagecond);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(20, 570, 171, 41));
        stat->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        label_12 = new QLabel(Pagecond);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 260, 201, 71));
        label_12->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 30pt \"Bebas Neue\";"));
        label_7->raise();
        tabWidget->raise();
        employe3pb->raise();
        pb_pdf->raise();
        stat->raise();
        label_12->raise();

        retranslateUi(Pagecond);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pagecond);
    } // setupUi

    void retranslateUi(QDialog *Pagecond)
    {
        Pagecond->setWindowTitle(QApplication::translate("Pagecond", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Pagecond", "CIN", Q_NULLPTR));
        label_2->setText(QApplication::translate("Pagecond", "NOM", Q_NULLPTR));
        label_3->setText(QApplication::translate("Pagecond", "PRENOM", Q_NULLPTR));
        label_4->setText(QApplication::translate("Pagecond", "DATE DE NAISSANCE", Q_NULLPTR));
        label_5->setText(QApplication::translate("Pagecond", "NATIONALITE", Q_NULLPTR));
        cin_c->setPlaceholderText(QApplication::translate("Pagecond", "Number only", Q_NULLPTR));
        nom_c->setPlaceholderText(QApplication::translate("Pagecond", "characters only", Q_NULLPTR));
        prenom_c->setPlaceholderText(QApplication::translate("Pagecond", "characters only", Q_NULLPTR));
        label_8->setText(QApplication::translate("Pagecond", "ID OFFRE", Q_NULLPTR));
        id_offre->setPlaceholderText(QApplication::translate("Pagecond", "Number only", Q_NULLPTR));
        sortAscButton->setText(QApplication::translate("Pagecond", "ASCendant", Q_NULLPTR));
        sortDescButton->setText(QApplication::translate("Pagecond", "DESCendant", Q_NULLPTR));
        QRCODE_3->setText(QString());
        lab_chart->setText(QString());
        lab_chart2->setText(QString());
        label_32->setText(QString());
        daten_c->setPlaceholderText(QApplication::translate("Pagecond", "AAAA-MM-DD", Q_NULLPTR));
        Nation_c->setPlaceholderText(QApplication::translate("Pagecond", "characters only", Q_NULLPTR));
        pb_ajouter->setText(QString());
        pb_modifier_2->setText(QString());
        pb_supprimer->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("Pagecond", "Search", Q_NULLPTR));
        search->setText(QString());
        QR->setText(QString());
        refrech_pb->setText(QString());
        label_6->setText(QApplication::translate("Pagecond", "GENRE", Q_NULLPTR));
        genre_c->clear();
        genre_c->insertItems(0, QStringList()
         << QApplication::translate("Pagecond", "homme", Q_NULLPTR)
         << QApplication::translate("Pagecond", "femme", Q_NULLPTR)
        );
        radioButtonNom->setText(QApplication::translate("Pagecond", "Nom", Q_NULLPTR));
        radioButtonPrenom->setText(QApplication::translate("Pagecond", "Prenom", Q_NULLPTR));
        radioButtonCin->setText(QApplication::translate("Pagecond", "cin", Q_NULLPTR));
        nomasc->setText(QApplication::translate("Pagecond", "NOM ASC", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_7->setText(QString());
        employe3pb->setText(QString());
        pb_pdf->setText(QApplication::translate("Pagecond", "PDF", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        stat->setWhatsThis(QApplication::translate("Pagecond", "<html><head/><body><p>Stat nombre max <br/>de participant</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        stat->setText(QApplication::translate("Pagecond", "Genre", Q_NULLPTR));
        label_12->setText(QApplication::translate("Pagecond", "EXPORT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Pagecond: public Ui_Pagecond {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGECOND_H
