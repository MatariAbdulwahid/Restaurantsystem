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
     QString username , psw ;
     username = ui->ed_txt1->text();
     psw = ui->ed_txt2->text();
     if(username == "abdul" && psw == "123"){
         this->hide();
         QMessageBox::about(this , "" ,"login success");
         getState = true ;  //return true when the password corect
     } else {
        QMessageBox::warning(this ,"Error" ,"Password oder username is wrong" ,nullptr , nullptr);
        getState = false ;
     }

}


