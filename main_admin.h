#ifndef MAIN_ADMIN_H
#define MAIN_ADMIN_H
#include "adminn.h"
#include <QMainWindow>
#include "add_user.h"
#include "add_medicine.h"
#include "admin_order.h"
namespace Ui {
class main_admin;
}

class main_admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit main_admin(QWidget *parent = nullptr);
    ~main_admin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::main_admin *ui;
    adminn *adminn;
    add_user *add_user;
    add_medicine *add_medicine;
    admin_order *admin_order;
};

#endif // MAIN_ADMIN_H
