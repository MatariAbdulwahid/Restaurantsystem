#ifndef MENUS_H
#define MENUS_H

#include <QDialog>
#include "foods.h"
#include <QList>
namespace Ui {
class Menus;
}

class Menus : public QDialog
{
    Q_OBJECT

public:
    explicit Menus(QWidget *parent = nullptr);
    ~Menus();
    double Preise =0.0 ;
    QList<Foods> *dateList ;
    Foods food() ;

private slots:
    void on_Menus_accepted();

    void on_btnFoods_clicked();


    void on_pushButton_25_clicked();

    void on_btn_Hauptisch_clicked();

    void on_btn_salat_clicked();

    void on_btn_nachtisch_clicked();

    void on_btn_getr_clicked();

    void on_btnCola_clicked();

    void on_btnFanta_clicked();

    void on_btnSpirte_clicked();

    void on_btnPepsi_clicked();

    void on_btnColaLiter_clicked();

    void on_btnMangoSaft_clicked();

    void on_btnOrangeSaft_clicked();

    void on_btnKwi_clicked();

    void on_btnApf_clicked();

    void on_btnErd_clicked();

    void on_btnAnans_clicked();

    void on_btnBanna_clicked();

    void on_btn_clicked();

    void on_btnRwein_clicked();

    void on_btnWwein_clicked();

    void on_btnTee_clicked();

    void on_btnKaffee_clicked();

    void on_btnLatte_clicked();

    void on_btnCap_clicked();

    void on_btnBeer_clicked();

    void on_btnFleisch_clicked();

    void on_btnHan_clicked();

    void on_btnSuppe_clicked();

    void on_btnBeri_clicked();

    void on_btnKapsa_clicked();

    void on_btnMinBur_clicked();

    void on_btnCkBurg_clicked();

    void on_btnKApA_clicked();

    void on_btnFish_clicked();

    void on_btnPizaMini_clicked();

    void on_btnMansaft_clicked();

    void on_btnSoja_clicked();

    void on_btnVegBurg_clicked();

    void on_btnSussi_clicked();

    void on_pushButton_77_clicked();

    void on_btnZar_clicked();

    void on_btnSuss_clicked();

    void on_btnFlafal_clicked();

    void on_btnChCUR_clicked();

    void on_btnFliCur_clicked();

    void on_btnFeldSalat_clicked();

    void on_btnKopfSalat_clicked();

    void on_btnEisSALAT_clicked();

    void on_btnLolloSal_clicked();

    void on_btnFruSalat_clicked();

    void on_btnLollRosso_clicked();

    void on_btnRoemerSalat_clicked();

    void on_btnChicoSalat_clicked();

    void on_btnMinSalat_clicked();

    void on_btnNorSalat_clicked();

    void on_btnGrucka_clicked();

    void on_btn12_clicked();

    void on_btnRucola_clicked();

    void on_btnFrischSala_clicked();

    void on_btn10_clicked();

    void on_btn15_clicked();

    void on_btn16_clicked();

    void on_btn17_clicked();

    void on_btn17_2_clicked();

    void on_btn19_clicked();

    void on_btnShoko_clicked();

    void on_btnKochen_clicked();

    void on_btnGatto_clicked();

    void on_pushButton_106_clicked();

    void on_pushButton_107_clicked();

    void on_pushButton_108_clicked();

    void on_pushButton_clicked();

    void on_btnApf_2_clicked();

    void on_btnErd_roma_clicked();

    void on_btnGrie_clicked();

    void on_btnPuff_clicked();

    void on_btnRued_clicked();

    void on_btnTiram_clicked();

    void on_btnSalBurg_clicked();

    void on_btnPanCotte_clicked();

    void on_pushButton_117_clicked();

    void on_btnKnua_clicked();

    void on_btnPuefferjes_clicked();

    void on_btnnew_clicked();

    void on_pushButton_121_clicked();

    void on_pushButton_122_clicked();

    void on_btn_Clear_clicked();

    void on_btnPay_clicked();

private:
    Ui::Menus *ui;
};

#endif // MENUS_H
