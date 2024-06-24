#ifndef STYLESHEET_H
#define STYLESHEET_H

#include <QString>

const QString styleSheet = R"(

QWidget#centralwidget {
    background-color: #71837D;
}

QPushButton {
    background-color: #1B1C3F;
    color: white;
    border-radius: 10px;
    font: bold 14px;
    padding: 6px;
}

QLabel {
    font-weight: bold;
}

QLabel#DiamondExchange {
    font-size:20pt;
}

)";

#endif // STYLESHEET_H
