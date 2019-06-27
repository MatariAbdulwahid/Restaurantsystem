#include "user.h"
#include "ui_user.h"



User::User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
}

User::~User()
{
    delete ui;
}

void User::AddUser(){



    //int count = dm.GetDataString("select count(id) from Mitarbeiter ").toInt()+1;
    try {
        if(ui->txt_psw->text() =="" || ui->txt_email->text() == "" || ui->txt_nname->text()=="" || ui->txt_phone->text() == "" || ui->txt_psw2->text() =="" || ui->txt_vname->text() == "" || ui->txt_email->text() == ""){
            QMessageBox::information(this ,"" ,"Bitte füllen Sie alles aus .. !");

        }
        else {
            if(ui->txt_psw->text() != ui->txt_psw2->text()){
                QMessageBox::information(this ,"" ,"Passwords muss beide gleich sein bitte checken Sie !");
            } else {
       dm.SetCommand("insert into [Rersturant].[dbo].[Users] values('" + ui->txt_vname->text() + "','"+ ui->txt_nname->text()+"','" + ui->txt_strasse->text()+"','" +ui->txt_username->text()+ "','" +ui->txt_psw->text() + "','" +ui->txt_email->text() + "','" + ui->txt_phone->text() +"','" +ui->cmbUtype->currentText() + "');");
        QMessageBox::information(this ,"" ,"Data wurde gespeichert .. !");
        on_btnClear_clicked(); //clear
            }
        }
    } catch (...) {
        QMessageBox::about(this , "Error" ,"Error");
    }
}



void User::UpdateUser() {

}
void User::DelteUser() {

}
void User::on_btnSave_clicked()
{
    AddUser();  //call the class
}

void User::on_btnUpdate_clicked()
{
    ui->txt_username->setText( dm.GetDataString("SELECT [username] FROM [Rersturant].[dbo].[Users] where id = 1 "));
}

void User::on_btnClear_clicked()
{
    ui->txt_psw->clear();
    ui->txt_email->clear();
    ui->txt_nname->clear();
    ui->txt_phone->clear();
    ui->txt_psw2->clear();
    ui->txt_username->clear();
    ui->txt_strasse->clear();
    ui->txt_vname->clear();
}
