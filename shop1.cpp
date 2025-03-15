#include "shop1.h"
#include "ui_shop1.h"
#include <QPixmap>
#include <QLabel>
#include <QMessageBox>
#include <QPushButton>
#include <QGraphicsPixmapItem>
#include <QString>
#include "playermoney.h"

Shop1::Shop1(QWidget *parent, int money1) : QDialog(parent), ui(new Ui::Shop1)
{
    ui->setupUi(this);
    setWindowTitle("Shop");
    QPixmap backgroundImage("C:/Users/HP/Downloads/2306.w026.n002.3448B.p1.3448.jpg");
    backgroundImage = backgroundImage.scaledToWidth(200);
    backgroundImage = backgroundImage.scaledToHeight(200);
    QLabel *backgroundLabel = new QLabel(this);
    backgroundLabel->setPixmap(backgroundImage);
    backgroundLabel->lower();
    backgroundLabel->setGeometry(0, 0, width(), height());
    QPixmap cannonImage("C:/Users/HP/Desktop/-Last_new_version_clash_of_clans-main/New-clash-of-clans/images/Cannon.png");
    QPixmap townhallImage("C:/Users/HP/Desktop/-Last_new_version_clash_of_clans-main/New-clash-of-clans/images/Castle.png");
    QPixmap fenceImage("C:/Users/HP/Desktop/-Last_new_version_clash_of_clans-main/New-clash-of-clans/images/Wall.png");
    townhallImage = townhallImage.scaledToWidth(50);
    townhallImage = townhallImage.scaledToHeight(50);

    QString backgroundImage1 = "C:/Users/HP/Desktop/-Last_new_version_clash_of_clans-main/New-clash-of-clans/images/Cannon.png";
    QString buttonStyle = "QPushButton {"
                          "    background-image: url(" + backgroundImage1 + ");"
                                               "    background-repeat: no-repeat;"
                                               "    background-position: center;"
                                               "}";

    ui->cannonbutton->setStyleSheet(buttonStyle);
    QSize buttonSize = ui->town->size();
    QPixmap scaledTownhallImage = townhallImage.scaled(buttonSize, Qt::KeepAspectRatio);
    QString backgroundImage2 ="C:/Users/HP/Desktop/-Last_new_version_clash_of_clans-main/New-clash-of-clans/images/Castle.png";
    "C:/Users/HP/Desktop/-Last_new_version_clash_of_clans-main/New-clash-of-clans/images/Castle.png";
    scaledTownhallImage.save(backgroundImage2);

    QString buttonStyle2 = "QPushButton {"
                           "    background-image: url(" + backgroundImage2 + ");"
                                                "    background-repeat: no-repeat;"
                                                "    background-position: center;"
                                                "}";

    ui->town->setStyleSheet(buttonStyle2);

    QString backgroundImage3 = "C:/Users/HP/Desktop/-Last_new_version_clash_of_clans-main/New-clash-of-clans/images/Wall.png";
    QString buttonStyle3 = "QPushButton {"
                           "    background-image: url(" + backgroundImage3 + ");"
                                                "    background-repeat: no-repeat;"
                                                "    background-position: center;"
                                                "}";


    ui->fencebutton->setStyleSheet(buttonStyle3);

    money = new playerMoney();
    town = new Townhall();
    cannon = new Cannon();
    fence = new Fence1("");
    currentMoney = money1;

    newMoney = currentMoney;


    //   connect(fence, &Fence1::fenceUpgraded, this, &Shop1::onFenceUpgraded);
    //  connect(cannon, &Cannon::cannonUpgraded, this, &Shop1::onUpgradeApplied);
}

Shop1::~Shop1()
{
    delete ui;
}

void Shop1::on_townHall_clicked()
{
    newMoney = currentMoney - 50;
    if (newMoney >= 0) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation","Are you sure you want to apply the townhall upgrade?\nYour money will be decreased by 50, but the health will be increased by 50%", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            money->setMoney(newMoney);
            type="Townhall";
            QPixmap newImage("C:/Users/HP/Downloads/Town_Hall9.webp");
            newImage = newImage.scaledToWidth(50);
            newImage = newImage.scaledToHeight(50);
            int newHealth = 15;
            // town->UpgradeButton();
            emit moneyChanged(newMoney);
            emit imagehealthChanges(type,newImage,newHealth);
        }
    } else {
        QMessageBox::critical(nullptr, "Not enough Money", "You don't have enough money for the townhall upgrade.");
    }
}




void Shop1::onUpgradeApplied(const QPixmap& newImage, int newHealth)
{
    // Handle the upgrade applied signal from Cannon or Fence
    // Update the UI or perform any other necessary actions
}



int Shop1::sendMoney(){
    return newMoney;
}

void Shop1::on_fence_clicked()
{
    newMoney = money->getCurrentMoney() - 50;
    if (newMoney >= 0) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to apply the fence upgrade?\nYour money will be decreased by 50, but the health will be increased by.", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            money->setMoney(newMoney);
            type="Fence";
            QPixmap newImage("C:/Users/HP/Downloads/Wall3.webp");
            newImage = newImage.scaledToWidth(50);
            newImage = newImage.scaledToHeight(50);

            int newHealth = 15;
            //    fence->fenceHealth->setMaxHealth(newHealth);
            emit moneyChanged(newMoney);
            emit imagehealthChanges(type,newImage,newHealth);
        }

    } else {
        QMessageBox::critical(this, "Not enough Money", "You don't have enough money for the fence upgrade.");
    }
}


void Shop1::on_cannon_clicked()
{
    newMoney = currentMoney - 50;
    if (newMoney >= 0) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to apply the cannon upgrade?\nYour money will be decreased by 50, but the health will be increased by.", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            money->setMoney(newMoney);

            QPixmap newImage("C:/Users/HP/Downloads/Cannon10B.webp");
            newImage = newImage.scaledToWidth(80);
            newImage = newImage.scaledToHeight(80);
            int newHealth = 15;
            emit moneyChanged(newMoney);

            type="Cannon";
            emit imagehealthChanges(type,newImage,newHealth);
        }
    } else {
        QMessageBox::critical(nullptr, "Not enough Money", "You don't have enough money for the cannon upgrade.");
    }
}

