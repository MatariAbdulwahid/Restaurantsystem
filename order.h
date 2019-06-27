#ifndef ORDER_H
#define ORDER_H

#include <QDialog>
#include "ordersystem.h"
#include "food.h"
#include "dbmangar.h"
#include <QList>
#include "morder.h"
#include "QMessageBox"

namespace Ui {
class Order;
}

class Order : public QDialog , Ordersystem
{
    Q_OBJECT

public:
    explicit Order(QWidget *parent = nullptr);
    ~Order();
    //  void AddOrder()  ;
    //  void DeleteOrder()  ;
     double Preise =0.0 ;
     QString Foodname ;
     QList <QString> ListOfFoods ;
     QList <double> ListPrise ;


private slots:
    void on_btn_Hauptisch_clicked();

    void on_btnSalat1_clicked();

    void on_btnSalat2_clicked();

    void on_btnSalat3_clicked();

    void on_btnSalat4_clicked();

    void on_btnSalat1_2_clicked();

    void on_btnSalat6_clicked();

    void on_btnDrink1_clicked();

    void on_btnDrink4_clicked();

    void on_btnDrink2_clicked();

    void on_btnDrink5_clicked();

    void on_btnDrink3_clicked();

    void on_btnDrink6_clicked();

    void on_btnFood1_clicked();

    void on_btnFood2_clicked();

    void on_btnFood3_clicked();

    void on_btnFood4_clicked();

    void on_btnFood5_clicked();

    void on_btnFood6_clicked();

    void on_btn_salat_clicked();

    void on_btn_getr_clicked();

    void on_btn_Clear_clicked();

    void on_btnPay_clicked();

private:
    Ui::Order *ui;
    DbMangar dm ;
    Food myFood;
    QList <mOrder> ls;
};

#endif // ORDER_H
