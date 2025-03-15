#ifndef BUTTONS_H
#define BUTTONS_H

#include <QPushButton>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QObject>

class pauseButton : public QPushButton
{
public:
    pauseButton();
};


class startMenuButtons : public QPushButton
{
public:
    startMenuButtons(QString text);
};

#endif // BUTTONS_H
