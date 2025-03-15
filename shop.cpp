#include "shop.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include <QMessageBox>

shop::shop(QWidget *parent)
{
    QGraphicsScene* scene = new QGraphicsScene(this);
    QGraphicsView* view = new QGraphicsView(scene, this);
    // setCentralWidget(view);

    QPixmap backgroundImage("C:/Users/HP/Downloads/free-photo-black-grunge-abstract-background-pattern-wallpaper.jpg");
    scene->setBackgroundBrush(backgroundImage);

    money = new playerMoney();
    town = new Townhall();
    cannon = new Cannon();
    fence = new Fence1("");

    QLabel* townhallLabel = new QLabel("Townhall");
    QPushButton* townhallUpgradeButton = new QPushButton("Upgrade");
    townhallUpgradeButton->setFixedSize(50, 20);
    townhallUpgradeButton->move(10, 10);

    scene->addWidget(townhallLabel);
    scene->addWidget(townhallUpgradeButton);

    QLabel* fenceLabel = new QLabel("Fence");
    QPushButton* fenceUpgradeButton = new QPushButton("Upgrade");
    fenceUpgradeButton->setFixedSize(50, 20);
    fenceUpgradeButton->move(10, 40);

    scene->addWidget(fenceLabel);
    scene->addWidget(fenceUpgradeButton);

    QLabel* cannonLabel = new QLabel("Cannon");
    QPushButton* cannonUpgradeButton = new QPushButton("Upgrade");
    cannonUpgradeButton->setFixedSize(50, 20);
    cannonUpgradeButton->move(10, 70);

    scene->addWidget(cannonLabel);
    scene->addWidget(cannonUpgradeButton);

}
void shop::upgradeTownhall()
{
    int newMoney = money->getCurrentMoney() - 50;
    if (newMoney >= 0) {
        money->setMoney(newMoney);
        town->UpgradeButton();
    } else {
        QMessageBox::critical(nullptr, "Not enough Money", "You don't have enough money for the townhall upgrade.");
    }
}

void shop::upgradeFence()
{
    int newMoney = money->getCurrentMoney() - 50;
    if (newMoney >= 0) {
        money->setMoney(newMoney);
        fence->UpgradeButton();
    } else {
        QMessageBox::critical(nullptr, "Not enough Money", "You don't have enough money for the fence upgrade.");
    }
}

void shop::upgradeCannon()
{
    int newMoney = money->getCurrentMoney() - 50;
    if (newMoney >= 0) {
        money->setMoney(newMoney);
        cannon->Upgrade();
    } else {
        QMessageBox::critical(nullptr, "Not enough Money", "You don't have enough money for the cannon upgrade.");
    }
}
