#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    // Initialize and add main window to stacked widget
    mainwindow = new QMainWindow;
}

LoginWindow::~LoginWindow()
{
    delete ui;
}
