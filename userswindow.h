#ifndef USERSWINDOW_H
#define USERSWINDOW_H

#include <QMainWindow>

namespace Ui {
class userswindow;
}

class userswindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit userswindow(QWidget *parent = nullptr);
    ~userswindow();

private:
    Ui::userswindow *ui;
};

#endif // USERSWINDOW_H
