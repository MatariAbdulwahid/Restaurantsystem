#include "usersmange.h"
#include "ui_usersmange.h"
#include "dbmanger.h"
#include "QMessageBox"
UsersMange::UsersMange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UsersMange)
{
    ui->setupUi(this);
}

UsersMange::~UsersMange()
{
    delete ui;
}

void UsersMange::on_btnSave_clicked()
{
    DbManger dm ;
    //int count = dm.GetDataString("select count(id) from Mitarbeiter ").toInt()+1;
    try {
        if(ui->txt_psw->text() =="" || ui->txt_email->text() == "" || ui->txt_nname->text()=="" || ui->txt_phone->text() == "" || ui->txt_psw2->text() =="" || ui->txt_vname->text() == "" || ui->txt_email->text() == ""){
            QMessageBox::information(this ,"" ,"Bitte füllen Sie alles aus .. !");

        }
        else {
            if(ui->txt_psw->text() != ui->txt_psw2->text()){
                QMessageBox::information(this ,"" ,"Passwords muss beide gleich sein bitte checken Sie !");
            } else {
       dm.SetCommand("insert into MITARBEITER values('" + ui->txt_vname->text() + "','"+ ui->txt_nname->text()+"','" + ui->txt_strasse->text()+"','" +ui->txt_username->text()+ "','" +ui->txt_psw->text() + "','" +ui->txt_email->text() + "','" + ui->txt_phone->text() + "');");
        QMessageBox::information(this ,"" ,"Data wurde gespeichert .. !");
            }
        }
    } catch (...) {
        QMessageBox::about(this , "Error" ,"Error");
    }

}

void UsersMange::on_btnUpdate_clicked()
{
    DbManger dm ;
    dm.GetData("  select vorname , nachname , strasse , phone , email FROM [Rersturant].[dbo].[mitarbeiter]", ui->tableViewUsers);
  //  dm.GetData("select vorname , nachname , strasse , phone , email from mitarbeiter" , ui->tableViewUsers );


}
