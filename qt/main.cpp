#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include "pagecond.h"
#include "pageoffres.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pageoffres w;
    Connection c;
    bool test=c.createconnect();
    if(test)
    {w.show();
    QMessageBox::information(nullptr, QObject::tr("database is open"),
                          QObject::tr("connection successful.\n"
                                      "click Cancel to exit."), QMessageBox::Cancel);
}
else
    QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                           QObject::tr("connection failed.\n"
                                       "Click Cancel to exit."), QMessageBox::Cancel);
    return a.exec();
}
