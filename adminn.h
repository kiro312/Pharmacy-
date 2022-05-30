#ifndef ADMINN_H
#define ADMINN_H

#include <QMainWindow>
#include<iostream>
#include<string>
using namespace std;
namespace Ui {
class adminn;
}

class adminn : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminn(QWidget *parent = nullptr);
    ~adminn();

private slots:
    void on_actionusers_triggered();

    void on_actionmedicine_triggered();

    void on_actionsave_2_triggered();

    void on_pushButton_clicked();

    void on_actionsave_medicine_triggered();

    void on_actionsave_user_triggered();

private:
    Ui::adminn *ui;
    string file_name;
};

#endif // ADMINN_H
