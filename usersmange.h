#ifndef USERSMANGE_H
#define USERSMANGE_H

#include <QDialog>

namespace Ui {
class UsersMange;
}

class UsersMange : public QDialog
{
    Q_OBJECT

public:
    explicit UsersMange(QWidget *parent = nullptr);
    ~UsersMange();

private slots:
    void on_btnSave_clicked();

    void on_btnUpdate_clicked();

private:
    Ui::UsersMange *ui;
};

#endif // USERSMANGE_H
