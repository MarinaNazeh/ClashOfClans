#include "buttons.h"

pauseButton::pauseButton()
{
    setFixedSize(80, 80);
    setStyleSheet("QPushButton { border-radius : 40px; background-color : transparent; }");
    setIcon(QIcon(":/images/pause.png"));
    setIconSize(QSize(80, 80));
    setFlat(false);
}

startMenuButtons::startMenuButtons(QString text)
{
    setText(text);
    setStyleSheet("font-size: 20px;");
}

