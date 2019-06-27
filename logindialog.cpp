#include "logindialog.h"
#include "ui_logindialog.h"
#include "QMessageBox"
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_btn_login_clicked()
{
         QString username , psw ;
         username = ui->ed_txt1->text();
         psw = ui->ed_txt2->text();
         if(username == "abdul" && psw == "123"){

             this->hide();

             QMessageBox::about(this , "" ,"login success");
             loginstatus = 1;

         } else {
             loginstatus = 0;
            QMessageBox::warning(this ,"Error" ,"Password oder username is wrong" ,nullptr , nullptr);
     }
}
