#ifndef FOODCONTROLL_H
#define FOODCONTROLL_H

#include <QDialog>

namespace Ui {
class FoodControll;
}

class FoodControll : public QDialog
{
    Q_OBJECT

public:
    explicit FoodControll(QWidget *parent = nullptr);
    ~FoodControll();

private:
    Ui::FoodControll *ui;
};

#endif // FOODCONTROLL_H
