#include "foodcontroll.h"
#include "ui_foodcontroll.h"

FoodControll::FoodControll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FoodControll)
{
    ui->setupUi(this);
}

FoodControll::~FoodControll()
{
    delete ui;
}
