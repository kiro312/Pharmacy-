#ifndef CART_H
#define CART_H

#include <QMainWindow>
#include "confirm_window.h"
namespace Ui {
class cart;
}

class cart : public QMainWindow
{
    Q_OBJECT

public:
    explicit cart(QWidget *parent = nullptr);
    ~cart();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::cart *ui;
    confirm_window *confirm_window;

};

#endif // CART_H
