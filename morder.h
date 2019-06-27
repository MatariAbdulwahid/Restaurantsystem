#ifndef MORDER_H
#define MORDER_H
#include "QString"
#include "QDate"
class mOrder {
public:
    int id ;
    QString FoodName ;
    double Foodprise ;
    QDate date ;
    int tischNr ;
    double Tprise ;

    mOrder (int id , QString fname , double fprice , QDate date , double tprice) : id(id) ,FoodName(fname) , Foodprise(fprice) ,date(date) ,Tprise(tprice) {}
};



#endif // MORDER_H
