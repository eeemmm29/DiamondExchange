#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>


#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private:
    Ui::LoginWindow *ui;
    QMainWindow *mainwindow; // Pointer to MainWindow
};
#endif // MAINWINDOW_H
