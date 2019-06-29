#include "food.h"
#include "ui_food.h"
#include "QMessageBox"

Food::Food(QWidget *parent) :
    
    QDialog(parent),
    ui(new Ui::Food)
{
    ui->setupUi(this);
}

Food::~Food()
{
    delete ui;
}

void Food::AddFood(){
    if(ui->txt_Fname->text().isEmpty() || ui->txt_Fprice->text().isEmpty() || ui->txt_cate->text().isEmpty()){
        QMessageBox::information(this ,"" ,"Bitte füllen Sie alles aus .. !");

    } else {
        try {
             dm.SetCommand("insert into [Rersturant].[dbo].[Food] values ('" + ui->txt_Fname->text() + "','" + ui->txt_cate->text() +"',"+ ui->txt_Fprice->text() +");");
               QMessageBox::information(this ,"" ,"Data wurde gespeichert .. !");
               on_btnClear_clicked();  //clear the text
        } catch (...) {
             QMessageBox::about(this , "Error" ,"Error");
        }

    }
}
void Food::UpdateFood(){
    QString sqlCommend = "SELECT TOP 1000 [FoodName] ,[FoodCtg] ,[Foodprise]FROM [Rersturant].[dbo].[Food]";
    dm.GetData(sqlCommend , ui->tblView);

}
void Food::on_btnSave_clicked()
{
        AddFood();
}

void Food::on_btnClear_clicked()
{
    ui->txt_Fname->clear();
    ui->txt_cate->clear();
    ui->txt_Fprice->clear();
}

void Food::on_btnUpdate_clicked()
{
    UpdateFood();
}

void Food::on_pushButton_2_clicked()
{
    //DeleteFood();
}
