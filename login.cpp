#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include "dbmanger.h"
#include "setting.h"
#include "mainwindow.h"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

}

Login::~Login()
{
    delete ui;
}


void Login::on_btn_login_clicked()
{
     MainWindow mw;
     QString username , psw ;
     username = ui->ed_txt1->text();
     psw = ui->ed_txt2->text();
     if(username == "abdul" && psw == "123"){

         this->hide();

         QMessageBox::about(this , "" ,"login success");

         mw.logIncheck();


     } else {
        QMessageBox::warning(this ,"Error" ,"Password oder username is wrong" ,nullptr , nullptr);
}

}

int Dconnect(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("LOCALHOST\\SQLEXPRESS");
    db.setDatabaseName("Rersturant");
    db.setUserName("Abdul");
    db.setPassword("");

    int a ;
    if(db.open()){
            a = 1;
    }
    else {
           a = 1;
    }
    return a;
}
