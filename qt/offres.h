#ifndef OFFRES_H
#define OFFRES_H
#include<QString>
#include<QDate>
#include<QSqlQueryModel>
#include<QDate>

class offres
{
public:
    offres();
    offres(int,QString,QString,QString,QString,QString);
    QSqlQueryModel* sortByIdAsc();
      QSqlQueryModel* sortByIdDesc();
int getid_offre();
QString gettitre_o();
QString getdescription_o();
QString getlocalisation_o();
QString getdate_pub_o();
QString getstatut_o();


void setid_offre(int);
void settitre_o(QString);
void setdescription_o(QString);
void setlocalisation_o(QString);
void setdate_pub_o(QString);
void setstatut_o(QString);

bool ajouter();
QSqlQueryModel* afficher ();
bool supprimer (int);
bool modifier(int);
 bool checkIfoffresExists(int);

private:
    int id_offre;
    QString titre_o , description_o, localisation_o, date_pub_o, statut_o;

};

#endif // OFFRES_H
