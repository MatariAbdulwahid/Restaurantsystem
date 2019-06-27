#ifndef USER_H
#define USER_H

#include <QDialog>
#include "usercontroll.h"
#include "dbmangar.h"
#include "QMessageBox"
namespace Ui {
class User;
}

class User : public QDialog , UserControll
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();
      void AddUser() ;
      void UpdateUser() ;
      void DelteUser() ;


private slots:
    void on_btnSave_clicked();

    void on_btnUpdate_clicked();

    void on_btnClear_clicked();

private:
    Ui::User *ui;
    DbMangar dm ;
};

#endif // USER_H
