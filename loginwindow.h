#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_BtnSignIn_clicked();

private:
    Ui::LoginWindow *ui;
    MainWindow *mw;
};

#endif // LOGINWINDOW_H
