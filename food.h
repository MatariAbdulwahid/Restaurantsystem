#ifndef FOOD_H
#define FOOD_H

#include <QDialog>
#include "foodcomponent.h"
#include "dbmangar.h"
namespace Ui {
class Food;
}

class Food : public QDialog
{
    Q_OBJECT

public:
    explicit Food(QWidget *parent = nullptr);
    ~Food();

      void AddFood();
      void UpdateFood();
      void DeleteFood();
private slots:
    void on_btnSave_clicked();


    void on_btnClear_clicked();

    void on_btnUpdate_clicked();

    void on_pushButton_2_clicked();

private:
     DbMangar dm ;
    Ui::Food *ui;
};

#endif // FOOD_H
