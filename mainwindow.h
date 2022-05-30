#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "adminn.h"
#include "main_userwindow.h"
#include "main_admin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_Admin_clicked();

    void on_pushButton_Register_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
    adminn *adminn;   
    main_userwindow *main_userwindow;
    main_admin *main_admin;



};
#endif // MAINWINDOW_H
