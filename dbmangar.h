#ifndef DBMANGAR_H
#define DBMANGAR_H
#include "QString"

#include "QtSql/QSqlDatabase"
#include "QtSql"

#include <QTableView>
class DbMangar
{
public:
   // DbMangar();

     QString serverNam=".\\SQLEXPRESS";
     QString dbname="Rersturant";
     QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");
     void ConnectSql();
     void IsOpend();
     void IsClosed();
     void SetCommand(QString );
     void GetData(QString ,QTableView * );
     QString GetDataString(QString);
};

#endif // DBMANGAR_H
