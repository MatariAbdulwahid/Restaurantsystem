#include "dbmangar.h"


void DbMangar::ConnectSql(){
    db.setConnectOptions();
    db.setDatabaseName("DRIVER={SQL Server Native Client 11.0};SERVER=localhost\\SQLExpress;DATABASE=Rersturant;UID=;PWD=;WSID=.;Trusted_connection=yes");
    db.open();
}

//insert command in sql server
void DbMangar::SetCommand(QString Sqlstatment){
    ConnectSql();
    QSqlQueryModel *model = new QSqlQueryModel;
               // QString query = Sqlstatment;
               model->setQuery(Sqlstatment, db);
    db.close();
}

void DbMangar::IsOpend(){

        db.open();

}
void DbMangar::IsClosed(){

        db.close();

}

//Get Data from sql server
void DbMangar::GetData(QString Sqlstatment ,QTableView *tblView){
  //QTableView tblView ;
   ConnectSql();
   QSqlQueryModel *model = new QSqlQueryModel;
   QSqlQuery *qry = new QSqlQuery();
   qry->prepare(Sqlstatment);
   qry->exec();
   model ->setQuery(*qry);
   tblView->setModel(model);

   db.close();
   //qDebug() <<(model->rowCount());
}


QString DbMangar::GetDataString(QString Sqlstatment){
     ConnectSql();
     QSqlQuery query( Sqlstatment);
     int fieldNo = query.record().indexOf(Sqlstatment);
     QString data ;


     while (query.next()) {
            data = query.value(fieldNo).toString();
      }
       db.close();
      return data;
}
