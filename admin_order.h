#ifndef ADMIN_ORDER_H
#define ADMIN_ORDER_H

#include <QMainWindow>

namespace Ui {
class admin_order;
}

class admin_order : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_order(QWidget *parent = nullptr);
    ~admin_order();

private:
    Ui::admin_order *ui;
};

#endif // ADMIN_ORDER_H
