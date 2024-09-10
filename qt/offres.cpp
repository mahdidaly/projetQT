#include "offres.h"
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
#include <QIntValidator>
#include<QSqlError>
#include<QString>
#include<QComboBox>
#include <QCoreApplication>
offres::offres()
{
     id_offre =0 ;
     titre_o="";
     description_o="";
     localisation_o="";
     date_pub_o="";
     statut_o="";



    }
     offres::offres (int  id_offre,QString  titre_o ,QString  description_o,QString localisation_o,QString date_pub_o,QString statut_o)
      {
        this->id_offre = id_offre ;
      this->titre_o=titre_o ;
         this->description_o=description_o ;
         this->localisation_o = localisation_o;
         this->date_pub_o = date_pub_o ;
          this-> statut_o =  statut_o ;

      }
    int offres::getid_offre(){return id_offre;}
    QString offres::gettitre_o(){return titre_o;}
    QString offres::getdescription_o(){return description_o ;}


     QString offres::getlocalisation_o(){return localisation_o;}
     QString offres::getdate_pub_o(){return date_pub_o ;}
    QString offres::getstatut_o(){return statut_o ;}


    void offres:: setid_offre(int id_offre ){this->id_offre =id_offre ;}
    void offres:: settitre_o(QString titre_o ){this->titre_o =titre_o ;}
  void offres:: setdescription_o(QString description_o ){this->description_o =description_o ;}
    void offres:: setlocalisation_o(QString localisation_o ){this->localisation_o =localisation_o ;}
    void offres:: setdate_pub_o(QString date_pub_o ){this->date_pub_o =date_pub_o ;}
 void offres:: setstatut_o(QString statut_o ){this->statut_o =statut_o ;}


  bool offres::ajouter()
  {
      QSqlQuery query;
      QString id_string = QString::number(id_offre);

      query.prepare("INSERT INTO offres (id_offre, titre_o, description_o, localisation_o, date_pub_o, statut_o) "
                    "VALUES (:id_offre, :titre_o, :description_o, :localisation_o, :date_pub_o, :statut_o)");

      query.bindValue(":id_offre", id_string);
         query.bindValue(":titre_o", titre_o);
         query.bindValue(":description_o", description_o);
         query.bindValue(":localisation_o", localisation_o);
         query.bindValue(":date_pub_o", date_pub_o);
         query.bindValue(":statut_o", statut_o);

         return query.exec();
     }


    QSqlQueryModel* offres::afficher()
    {
        QSqlQueryModel* model = new QSqlQueryModel();
        model->setQuery("select * from offres");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_offre"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" titre"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr(" description"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("localisation"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("date_pub"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("statut"));

        return model;
    }
    bool offres::supprimer(int id_offre)
    {
        QSqlQuery query;
        query.prepare("DELETE FROM offres WHERE id_offre = :id_offre");
        query.bindValue(":id_offre", id_offre);
        return query.exec();
    }
    bool offres::checkIfoffresExists(int id_offre)
    {
        QSqlQuery query;
        query.prepare("SELECT id_offre FROM offres where id_offre=:id_offre");
        query.bindValue(":id_offre", id_offre);
        if (query.exec() && query.next()) {
            return true;
        } else {
            return false;
        }
    }
    bool offres::modifier(int id_offre) {
        QSqlQuery query;
        query.prepare("UPDATE offres SET titre_o=:titre_o, description_o=:description_o, localisation_o=:localisation_o, date_pub_o=:date_pub_o, statut_o=:statut_o WHERE id_offre=:id_offre");

        query.bindValue(":id_offre", id_offre);
        query.bindValue(":titre_o", titre_o);
        query.bindValue(":description_o", description_o);
        query.bindValue(":localisation_o", localisation_o);
        query.bindValue(":date_pub_o", date_pub_o);
        query.bindValue(":statut_o", statut_o);

        return query.exec();
    }

    QSqlQueryModel* offres::sortByIdAsc()
    {
        QSqlQueryModel *model = new QSqlQueryModel();
            model->setQuery("SELECT * FROM offres ORDER BY id_offre ASC");
            return model;
    }

    QSqlQueryModel* offres::sortByIdDesc()
    {
        QSqlQueryModel *model = new QSqlQueryModel();
            model->setQuery("SELECT * FROM offres ORDER BY id_offre DESC");
            return model;
    }


