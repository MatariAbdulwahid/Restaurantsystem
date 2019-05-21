#include "dbmanger.h"
#include "QtSql/QSqlDatabase"
#include "QtSql"
#include "QMessageBox"


void DbManger::ConnectSql(){
    db.setConnectOptions();
    db.setDatabaseName("DRIVER={SQL Server Native Client 11.0};SERVER=localhost\\SQLExpress;DATABASE=Rersturant;UID=;PWD=;WSID=.;Trusted_connection=yes");
    db.open();
}

//insert command in sql server
void DbManger::SetCommand(QString Sqlstatment){
    ConnectSql();
    QSqlQueryModel *model = new QSqlQueryModel;
               // QString query = Sqlstatment;
               model->setQuery(Sqlstatment, db);
    db.close();
}

void DbManger::IsOpend(){

        db.open();

}
void DbManger::IsClosed(){

        db.close();

}

//Get Data form sql server
void DbManger::GetData(QString Sqlstatment ,QTableView *tblView){
  //QTableView tblView ;
  ConnectSql();
   QSqlQueryModel *model = new QSqlQueryModel;
   QSqlQuery *qry = new QSqlQuery();
   qry->prepare(Sqlstatment);
   qry->exec();
   model ->setQuery(*qry);
   tblView->setModel(model);
    db.close();
     qDebug() <<(model->rowCount());
}


QString DbManger::GetDataString(QString Sqlstatment){
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




