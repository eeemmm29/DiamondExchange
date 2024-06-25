#include "loginwindow.h"
#include "stylesheet.h"

#include <QApplication>
#include <QFile>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginWindow w;

    a.setStyleSheet(styleSheet);

    w.show();
    return a.exec();
}
