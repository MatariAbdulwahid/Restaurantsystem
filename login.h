#ifndef LOGIN_H
#define LOGIN_H
#include "dbmanger.h"
#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:


    void on_btu_add_clicked();

    void on_btn_login_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
