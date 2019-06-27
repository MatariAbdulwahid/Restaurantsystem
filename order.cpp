#include "order.h"
#include "ui_order.h"
#include "QListData"



Order::Order(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Order)
{
    ui->setupUi(this);
    ui->gridFrame->setHidden(true);
    ui->gridFrame_2->setHidden(true);
    ui->gridFrame_3->setHidden(true);
    ui->gridFrame->setGeometry(16,90,531,119);
    ui->gridFrame_2->setGeometry(16,90,531,119);
}

Order::~Order()
{
    delete ui;
}

void Order::on_btn_Hauptisch_clicked()
{

    ui->gridFrame->setHidden(true);  //show the form
    ui->gridFrame_2->setHidden(false);
    ui->gridFrame_3->setHidden(true);

   // ls.append(new mOrder(1,"Kabsa" ,12.2 , 01/01/2015 ,15.1));
    //dm.GetData("SELECT TOP 1000 [FoodName] ,[FoodCtg] ,[Foodprise] FROM [Rersturant].[dbo].[Food]" , ui->tblView);

}

void Order::on_btn_salat_clicked()
{
    ui->gridFrame_2->setHidden(true);
    ui->gridFrame_3->setHidden(true);
     ui->gridFrame->setHidden(false);
}

void Order::on_btn_getr_clicked()
{
     ui->gridFrame_2->setHidden(true);
      ui->gridFrame_3->setHidden(false);  //show the form
      ui->gridFrame->setHidden(true);
}


void Order::on_btnSalat1_clicked()
{
    Preise = Preise + 1.99 ;
    Foodname = "Normal Salat";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    ui->labelPreis->setText( QString::number(Preise) );
    ui->mListWidght->addItem("Salat normal                        1.99");
}

void Order::on_btnSalat2_clicked()
{
    Foodname = "Normal Salat";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->mListWidght->addItem("Salat normal                        1.99");
}

void Order::on_btnSalat3_clicked()
{
    Foodname = "Obst Salat";
    ListOfFoods.append(Foodname);
    ListPrise.append(4.99);
    Preise = Preise + 4.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->mListWidght->addItem("Obst normal                        4.99");
}

void Order::on_btnSalat4_clicked()
{
    Foodname = "Fransiosch Salat";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->mListWidght->addItem("Fransiosch Salat                        1.99");
}

void Order::on_btnSalat1_2_clicked()
{
    Foodname = "Oil Salat";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->mListWidght->addItem("Oil Salat                    1.99");
}

void Order::on_btnSalat6_clicked()
{
    Foodname = "Tomaten Salat";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ListPrise.append(1.99);
    ui->mListWidght->addItem("Tomaten Salat                       1.99");
}

void Order::on_btnDrink1_clicked()
{
    Foodname = "Pepsi 205 li";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ListPrise.append(1.99);
    ui->mListWidght->addItem("Pepsi 205 li                       1.99");
}

void Order::on_btnDrink4_clicked()
{
    Foodname = "Pepsi 205 li";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ListPrise.append(1.99);
    ui->mListWidght->addItem("Pepsi 205 li                       1.99");

}

void Order::on_btnDrink2_clicked()
{
    Foodname = "Cola 250 li";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ListPrise.append(1.99);
    ui->mListWidght->addItem("Cola 250 li                       1.99");

}

void Order::on_btnDrink5_clicked()
{

    Foodname = "Fanta 250 li";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ListPrise.append(1.99);
    ui->mListWidght->addItem("Fanta 250 li                       1.99");
}

void Order::on_btnDrink3_clicked()
{

    Foodname = "Saft 250 li";
    ListOfFoods.append(Foodname);
    ListPrise.append(3.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ListPrise.append(3.99);
    ui->mListWidght->addItem("Saft 250 li                       3.99");
}

void Order::on_btnDrink6_clicked()
{

    Foodname = "Cola 250 li";
    ListOfFoods.append(Foodname);
    ListPrise.append(1.99);
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ListPrise.append(1.99);
    ui->mListWidght->addItem("Cola lite 250 li                       1.99");
}

void Order::on_btnFood1_clicked()
{

}

void Order::on_btnFood2_clicked()
{

}

void Order::on_btnFood3_clicked()
{

}

void Order::on_btnFood4_clicked()
{

}

void Order::on_btnFood5_clicked()
{

}

void Order::on_btnFood6_clicked()
{

}





void Order::on_btn_Clear_clicked()
{
    ui->mListWidght->clear();
    ui->labelPreis->setText("0.0");
    Preise = 0;
}

void Order::on_btnPay_clicked()
{
    for (int i =0 ;i< ListOfFoods.count() ; i++){
         dm.SetCommand("insert into ");
    }
    if(ui->mListWidght->count() !=0){
        if(ui->cmbox->currentText() != "0"){
        ui->mListWidght->clear();
        QMessageBox::information(this , "Info" ,"Bezahlung ist erfolgreich.." ,nullptr,nullptr);
        Preise = 0;
        ui->labelPreis->setText("0.0");
        }else {
              QMessageBox::warning(this , "Error" ,"Tischnummer ist leer .." ,nullptr,nullptr);
        }
    }
    else {
         QMessageBox::warning(this , "Error" ,"Warenkorber ist leer .." ,nullptr,nullptr);
    }

}
