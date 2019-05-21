#include "menus.h"
#include "ui_menus.h"
#include "dbmanger.h"
#include "QLinkedList"
#include "QList"
#include "foods.h"


Menus::Menus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menus)
{
    ui->setupUi(this);
}

Menus::~Menus()
{
    delete ui;
}

//QList <Foods> list ;





void Menus::on_Menus_accepted()
{
    ui->frm2->setHidden(false);//to hide the frame drinks
    ui ->frm3->setHidden(true); //to show the frame foods
    ui->frm4->setHidden(true);//to hide the frame drinks
    ui->frm5->setHidden(true);

    ui->labl_date->setText(  QTime::currentTime().toString());


}






void Menus::on_btnFoods_clicked()
{
    DbManger db ;
    ui->labl_date->setText(  QTime::currentTime().toString() + "  " +QDate::currentDate().toString());
    // db.GetData("select *from mitarbeiter" , ui->listView);
     //ui->listView->showRow(1);

     //ui ->frm1->setHidden(false); //to show the frame foods
     ui->frm2->setHidden(true);//to hide the frame drinks
     ui ->frm3->setHidden(true); //to show the frame foods
     ui->frm4->setHidden(true);//to hide the frame drinks
     ui->frm5->setHidden(true);
}



void Menus::on_pushButton_25_clicked()
{
   // QListWidgetItem *item =  new QListWidgetItem("12" , "supper");
    ui->listWidget->addItem("suppe                                                                                     10 $");
}

void Menus::on_btn_Hauptisch_clicked()
{
   // ui ->frm1->setHidden(true); //to show the frame foods
    ui->frm2->setHidden(false);//to show the frame drinks
    ui->frm3->setHidden(true); //to hide the frame foods
    ui->frm4->setHidden(true);//to hide the frame drinks
    ui->frm5->setHidden(true);




}

void Menus::on_btn_salat_clicked()
{
    //ui ->frm1->setHidden(true); //to show the frame foods
    ui->frm2->setHidden(true);//to hide the frame drinks
    ui ->frm3->setHidden(false); //to show the frame foods
    ui->frm4->setHidden(true);//to hide the frame drinks
    ui->frm5->setHidden(true);
    ui->frm3->setGeometry(20,120,461,416); // hier to change the position
}

void Menus::on_btn_nachtisch_clicked()
{
    //ui ->frm1->setHidden(true); //to show the frame foods
    ui->frm2->setHidden(true);//to hide the frame drinks
    ui ->frm3->setHidden(true); //to show the frame foods
    ui->frm4->setHidden(false);//to hide the frame drinks
    ui->frm5->setHidden(true);
    ui->frm4->setGeometry(20,120,501,416); // hier to change the position
}

void Menus::on_btn_getr_clicked()
{
   // ui ->frm1->setHidden(true); //to show the frame foods
    ui->frm2->setHidden(true);//to hide the frame drinks
    ui ->frm3->setHidden(true); //to show the frame foods
    ui->frm4->setHidden(true);//to hide the frame drinks
    ui->frm5->setHidden(false);
    ui->frm5->setGeometry(20,120,461,416); // hier to change the position
}

void Menus::on_btnCola_clicked()
{
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Cola                                                                                   1.99 Euro");

}

void Menus::on_btnFanta_clicked()
{
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Fanta                                                                                 1.99 Euro");
     //food("Fanta",1.99 ,"2019");


}

void Menus::on_btnSpirte_clicked()
{
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Sprite                                                                                1.99 Euro");
}

void Menus::on_btnPepsi_clicked()
{
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
 ui->listWidget->addItem("Pepsi                                                                                     1.99 Euro");
}

void Menus::on_btnColaLiter_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Cola 1 Liter                                                                          2.99 Euro");
}

void Menus::on_btnMangoSaft_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
 ui->listWidget->addItem("Mango Saft                                                                                 2.99 Euro");
}

void Menus::on_btnOrangeSaft_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Orange Saft                                                                            2.99 Euro");
}

void Menus::on_btnKwi_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Orange Saft                                                                            2.99 Euro");
}

void Menus::on_btnApf_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Apfel Saft                                                                             2.99 Euro");
}

void Menus::on_btnErd_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Erdbeer Saft                                                                           2.99 Euro");
}

void Menus::on_btnAnans_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Anans Saft                                                                             2.99 Euro");
}

void Menus::on_btnBanna_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Banana Saft                                                                            2.99 Euro");
}

void Menus::on_btn_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Orange Saft                                                                            1.99 Euro");
}

void Menus::on_btnRwein_clicked()
{
    Preise = Preise + 5.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Rot Wein                                                                               5.99 Euro");
}

void Menus::on_btnWwein_clicked()
{
    Preise = Preise + 5.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Weis Wein                                                                              5.99 Euro");
}

void Menus::on_btnTee_clicked()
{
    Preise = Preise + 1.00 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Tee                                                                                    1.00 Euro");
}

void Menus::on_btnKaffee_clicked()
{
    Preise = Preise + 1.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Kaffee                                                                                 1.99 Euro");
     //ui->listWidget->addItem( Foods g("Kaffee",1.99 ,"2009"));
}

void Menus::on_btnLatte_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Latte                                                                                  2.99 Euro");
}

void Menus::on_btnCap_clicked()
{
    Preise = Preise + 3.00 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Capaccino                                                                              3.00 Euro");
}

void Menus::on_btnBeer_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Beer                                                                                   2.99 Euro");
}

void Menus::on_btnFleisch_clicked()
{
    Preise = Preise + 9.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Fleisch                                                                                9.99 Euro");
}

void Menus::on_btnHan_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Hanchen                                                                                6.99 Euro");
}

void Menus::on_btnSuppe_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Suppa                                                                                  2.99 Euro");
}

void Menus::on_btnBeri_clicked()
{
    Preise = Preise + 7.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Barani                                                                                 7.99 Euro");
}

void Menus::on_btnKapsa_clicked()
{
    Preise = Preise + 8.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Kapsa                                                                                  8.99 Euro");
}

void Menus::on_btnMinBur_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Mini Burger                                                                            2.99 Euro");
}

void Menus::on_btnCkBurg_clicked()
{
    Preise = Preise + 3.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Checken Burger                                                                         3.99 Euro");
}

void Menus::on_btnKApA_clicked()
{
    Preise = Preise + 5.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Kapap                                                                                  5.99 Euro");
}

void Menus::on_btnFish_clicked()
{
    Preise = Preise + 11.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Fish                                                                                   11.99 Euro");
}

void Menus::on_btnPizaMini_clicked()
{
    Preise = Preise + 2.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Mini Pizaa                                                                             2.99 Euro");
}

void Menus::on_btnMansaft_clicked()
{
    Preise = Preise + 7.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Mansaft                                                                                7.99 Euro");
}

void Menus::on_btnSoja_clicked()
{
    Preise = Preise + 5.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Soja                                                                                   5.99 Euro");
}

void Menus::on_btnVegBurg_clicked()
{
    Preise = Preise + 3.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Veganer Burger                                                                         3.99 Euro");
}

void Menus::on_btnSussi_clicked()
{
    Preise = Preise + 5.99 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Sussi                                                                                  5.99 Euro");
}

void Menus::on_pushButton_77_clicked()
{
    Preise = Preise + 8.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Pizza                                                                                  8.0 Euro");
}

void Menus::on_btnZar_clicked()
{
    Preise = Preise + 8.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem(" Zartweizenpfanne                                                                      8.0 Euro");

}

void Menus::on_btnSuss_clicked()
{
    Preise = Preise + 8.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Süßkartoffel Curry                                                                     8.0 Euro");
}

void Menus::on_btnFlafal_clicked()
{
    Preise = Preise + 4.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Flafel                                                                                 4.0 Euro");
}

void Menus::on_btnChCUR_clicked()
{
    Preise = Preise + 8.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Checken Curry                                                                          8.0 Euro");
}

void Menus::on_btnFliCur_clicked()
{
    Preise = Preise + 8.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Fleisch Curry                                                                          8.0 Euro");
}

void Menus::on_btnFeldSalat_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Feld Salat                                                                             2.0 Euro");
}

void Menus::on_btnKopfSalat_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Kopf Salat                                                                             2.0 Euro");
}

void Menus::on_btnEisSALAT_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Feld Salat                                                                             2.0 Euro");
}

void Menus::on_btnLolloSal_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Lollo bionda Salat                                                                     2.0 Euro");
}

void Menus::on_btnFruSalat_clicked()
{
    Preise = Preise + 5.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Fruit Salat                                                                            5.0 Euro");
}

void Menus::on_btnLollRosso_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Lollo rosso Salat                                                                      2.0 Euro");
}

void Menus::on_btnRoemerSalat_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Feld Salat                                                                             2.0 Euro");
}

void Menus::on_btnChicoSalat_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Römersalat Salat                                                                       2.0 Euro");
}

void Menus::on_btnMinSalat_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Chicorée Salat                                                                         2.0 Euro");
}

void Menus::on_btnNorSalat_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("mini Salat                                                                             2.0 Euro");
}

void Menus::on_btnGrucka_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Feld Salat                                                                             2.0 Euro");
}

void Menus::on_btn12_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Grucka Salat                                                                           2.0 Euro");
}

void Menus::on_btnRucola_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Feld Salat                                                                             2.0 Euro");
}

void Menus::on_btnFrischSala_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Rucola  Salat                                                                          2.0 Euro");
}

void Menus::on_btn10_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Friseesalat                                                                            2.0 Euro");
}

void Menus::on_btn15_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Feld Salat                                                                             2.0 Euro");
}

void Menus::on_btn16_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Feld Salat                                                                             2.0 Euro");
}

void Menus::on_btn17_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Lauch Salat                                                                            2.0 Euro");
}

void Menus::on_btn17_2_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Mangold Salat                                                                           2.0 Euro");
}

void Menus::on_btn19_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Portulak Salat                                                                          2.0 Euro");
}

void Menus::on_btnShoko_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Shoco                                                                                   2.0 Euro");
}

void Menus::on_btnKochen_clicked()
{
    Preise = Preise + 4.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Kochen                                                                                  4.0 Euro");
}

void Menus::on_btnGatto_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Gatto                                                                                   2.0 Euro");
}

void Menus::on_pushButton_106_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Portulak Salat                                                                          2.0 Euro");
}

void Menus::on_pushButton_107_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Portulak Salat                                                                          2.0 Euro");
}

void Menus::on_pushButton_108_clicked()
{
    Preise = Preise + 2.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Portulak Salat                                                                          2.0 Euro");
}

void Menus::on_pushButton_clicked()
{
    Preise = Preise + 6.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Portulak Salat                                                                          6.0 Euro");
}

void Menus::on_btnApf_2_clicked()
{
    Preise = Preise +8.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
     ui->listWidget->addItem("Apfel-Auflauf                                                                           8.0 Euro");
}

void Menus::on_btnErd_roma_clicked()
{
            Preise = Preise +8.0 ;
            ui->labelPreis->setText( QString::number(Preise) );
            ui->listWidget->addItem("Erdb-Romanow                                                                     8.0 Euro");
}

void Menus::on_btnGrie_clicked()
{

            Preise = Preise +8.0 ;
            ui->labelPreis->setText( QString::number(Preise) );
            ui->listWidget->addItem("Grießklößchen                                                                    8.0 Euro");

}

void Menus::on_btnPuff_clicked()
{

            Preise = Preise +8.0 ;
            ui->labelPreis->setText( QString::number(Preise) );
            ui->listWidget->addItem("Püfferjes                                                                       8.0 Euro");
}

void Menus::on_btnRued_clicked()
{

            Preise = Preise +8.0 ;
            ui->labelPreis->setText( QString::number(Preise) );
            ui->listWidget->addItem("Rüdesheimer                                                                     8.0 Euro");
}

void Menus::on_btnTiram_clicked()
{
    Preise = Preise +8.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Tiramisu                                                                                8.0 Euro");
}

void Menus::on_btnSalBurg_clicked()
{
    Preise = Preise +3.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Salzburger                                                                             3.0 Euro");
}

void Menus::on_btnPanCotte_clicked()
{

    Preise = Preise +6.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Panna Cotta                                                                         6.0 Euro");
}

void Menus::on_pushButton_117_clicked()
{
    Preise = Preise +3.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Salzburger                                                                           3.0 Euro");
}

void Menus::on_btnKnua_clicked()
{

    Preise = Preise +3.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Knaffa                                                                              3.0 Euro");
}

void Menus::on_btnPuefferjes_clicked()
{

    Preise = Preise +3.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Püfferjes                                                                           3.0 Euro");
}

void Menus::on_btnnew_clicked()
{
    Preise = Preise +3.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Püfferjes                                                                           3.0 Euro");
}

void Menus::on_pushButton_121_clicked()
{
    Preise = Preise +3.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Püfferjes                                                                           3.0 Euro");
}

void Menus::on_pushButton_122_clicked()
{
    Preise = Preise +3.0 ;
    ui->labelPreis->setText( QString::number(Preise) );
    ui->listWidget->addItem("Püfferjes                                                                           3.0 Euro");
}

void Menus::on_btn_Clear_clicked()
{
      ui->listWidget->clear();
      Preise = 0;
      ui->labelPreis->setText("0.0");
}

void Menus::on_btnPay_clicked()
{
    DbManger dm ;
    QStringList item;


}
