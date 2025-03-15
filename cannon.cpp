#include <QMouseEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QDialog>
#include "cannon.h"
#include "bullet.h"
#include "health.h"
#include <QGraphicsRectItem>
#include <QTimer>

Cannon::Cannon()
{
   QPixmap pixmap(":/images/Cannon.png");
   pixmap = pixmap.scaledToWidth(100);
   pixmap = pixmap.scaledToHeight(100);
   this->setPixmap(pixmap);
   // cannonHealth= new Health();

}

qreal Cannon::power = 100;
qreal Cannon::currPower = 100;

void Cannon::powerUp()
{
    power += power * 0.1; //power upgrades by 10% each 20 kills
    currPower += power * 0.1;
}

void Cannon::Upgrade()
{
    QPixmap pixmap(":/images/Castle.png");
    // QPixmap pixmap("C:/Users/HP/Desktop/Cannon19B.webp");
    pixmap = pixmap.scaledToWidth(50);
    pixmap = pixmap.scaledToHeight(50);
    this->setPixmap(pixmap);
    this->update();
    // cannonHealth->setMaxHealth(15);
    // emit cannonUpgraded(pixmap, cannonHealth->getHealth());

}
void Cannon::setPix(QPixmap image){
    this->setPixmap(image);
}

