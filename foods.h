#ifndef FOODS_H
#define FOODS_H
#include "QString"
class Foods {
    private:
    QString FoodName  ;
    double FoodPrise  ;
    QString Datum  ;

    public:
    void setFoodName (QString foodname){foodname = FoodName;}
    void setFoodPrise (double prise){FoodPrise = prise;}
    void setDatum (QString date){Datum = date;}
    QString getFoodName(){return FoodName;}
    double getFoodPrise(){return FoodPrise;}
    QString getDatum (){return Datum;}

    Foods(){}
    Foods (QString Foodname , double Foodprise , QString datum) :FoodName(Foodname), FoodPrise(Foodprise) ,Datum (datum){}

};


#endif // FOODS_H
