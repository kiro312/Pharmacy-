#ifndef CONFIRM_WINDOW_H
#define CONFIRM_WINDOW_H

#include <QMainWindow>

namespace Ui {
class confirm_window;
}

class confirm_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit confirm_window(QWidget *parent = nullptr);
    ~confirm_window();

private:
    Ui::confirm_window *ui;
};

#endif // CONFIRM_WINDOW_H
