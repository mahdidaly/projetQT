#ifndef PAGEOFFRES_H
#define PAGEOFFRES_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "offres.h"
#include "pagecond.h"
#include <QCameraImageCapture>
#include <QMediaPlayer>
#include <QtCharts/QChartView>
class QStandardItemModel;
class QSortFilterProxyModel;
class Pagecond;
namespace Ui {
class pageoffres;
}

class pageoffres : public QDialog
{
    Q_OBJECT

public:
    explicit pageoffres(QWidget *parent = nullptr);
    ~pageoffres();
    QSqlQueryModel *sortBySalaireAsc();
    QSqlQueryModel *sortBySalaireDesc();
void addCameraWidget();
private slots:
    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pb_ajouter_clicked();


    void handleMessageBoxResult(int result);




    void on_condpb_clicked();


    void on_tableViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous);


    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);
    void on_sortAscButton_clicked();
        void on_sortDescButton_clicked();









        void on_pb_pdf_clicked();



        void Stat();


void on_refrech_pb_clicked();


void on_stat_clicked();










void on_locaasc_clicked();

void on_historique_clicked();

void on_pushButton_clicked();

void on_pushButton_2_clicked();

private:
    Ui::pageoffres *ui;
    Pagecond *pagecond;
    offres *O;
      int selectedoffreRow;
         QSortFilterProxyModel *proxyModel;
         bool showLabel;
 QTimer *refreshTimer;
    QByteArray data; // variable contenant les données reçues
QList<QPair<QDateTime, QString>> historique;

};



#endif // PAGEOFFRES_H
