#include "startwindow.h"
#include "ui_startwindow.h"
#include <QLabel>
#include <QPalette>
#include <QProgressBar>
#include <QTimer>
#include <start.h>
startwindow::startwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::startwindow)
{
    ui->setupUi(this);

    QPixmap backgroundImage("C:/Users/HP/Downloads/free-photo-black-grunge-abstract-background-pattern-wallpaper.jpg");
    QLabel *backgroundLabel = new QLabel(this);
    backgroundLabel->setPixmap(backgroundImage);
    backgroundLabel->lower();
    backgroundLabel->setGeometry(0, 0, width(), height());


    ui->progressBar->setGeometry(98, 130, 200, 25);
    ui->progressBar->setStyleSheet("QProgressBar { border: 2px solid orange; background-color: black; text-align: center; }"
                                   "QProgressBar::chunk { background-color: orange; }"
                                   "QProgressBar::chunk::text { color: transparent; }"); // Hide the percentage text
    ui->progressBar->setRange(0, 100);


    QLabel *loadingLabel = new QLabel("LOADING...", this);
    int progressBarY = ui->progressBar->y();
    int progressBarX = ui->progressBar->x();
    int progressBarHeight = ui->progressBar->height();
    loadingLabel->setGeometry(progressBarX, progressBarY - progressBarHeight - 10, 200, 25);
    loadingLabel->setAlignment(Qt::AlignCenter);


    QFont font = loadingLabel->font();
    font.setBold(true);
    font.setPointSize(14);
    loadingLabel->setFont(font);

    loadingLabel->setStyleSheet("color: rgb(255, 165, 0);");
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &startwindow::updateProgressBar);
    timer->start(180);
}


startwindow::~startwindow()
{
    delete ui;
}

void startwindow::updateProgressBar()
{
    static int value = 0;

    value += 10;
    ui->progressBar->setValue(value);

    if (value >= 100) {
        sender()->deleteLater();
        ui->progressBar->hide();

        Start* start = new Start();
        start->show();
        this->hide();
    }
}


