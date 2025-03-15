#include "start.h"
#include "ui_start.h"
#include "game.h"
#include <QAudioOutput>
#include <QLabel>
#include <QMediaPlayer>
#include <QSoundEffect>
#include <QAudioOutput>
#include <QSlider>
#include <QGraphicsPixmapItem>
Start::Start(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Start)
{
    QPixmap backgroundImage("C:/Users/HP/Downloads/game-art-stage-background.jpg");
    QLabel *backgroundLabel = new QLabel(this);
    backgroundImage = backgroundImage.scaledToWidth(900);
    backgroundImage = backgroundImage.scaledToHeight(900);
    backgroundLabel->setPixmap(backgroundImage);
    backgroundLabel->lower();
    backgroundLabel->setGeometry(0, 0, width(), height());

    ui->setupUi(this);
    backgroundMusicPlayer.setAudioOutput(&audiooutput);
    backgroundMusicPlayer.setSource(QUrl("qrc:/Sound files/fm-freemusic-inspiring-optimistic-upbeat-energetic-guitar-rhythm(chosic.com).mp3"));
    backgroundMusicPlayer.play();

}

Start::~Start()
{
    delete ui;
}

void Start::on_start_clicked()
{
    Game* game= new Game;
    game->show();
}


void Start::on_sound_clicked()
{
    QDialog* soundSettingsDialog = new QDialog(this);
    soundSettingsDialog->setWindowTitle("Sound Settings");

    QVBoxLayout* layout = new QVBoxLayout(soundSettingsDialog);

    QLabel* volumeLabel = new QLabel("Volume");
    QSlider* volumeSlider = new QSlider(Qt::Horizontal);
    volumeSlider->setRange(0, 100);
    volumeSlider->setValue(int( 100));

    QPushButton* applyButton = new QPushButton("Apply");

    layout->addWidget(volumeLabel);
    layout->addWidget(volumeSlider);
    layout->addWidget(applyButton);

    connect(applyButton, &QPushButton::clicked, soundSettingsDialog, &QDialog::accept);
    connect(volumeSlider, &QSlider::valueChanged, this, [this](int value) {
        qreal volume = qreal(value) / 100.0;
        audiooutput.setVolume(volume);
    });

    if (soundSettingsDialog->exec() == QDialog::Accepted)
    {
        int volume = volumeSlider->value();
        QMessageBox::information(this, "Sound Settings", "Volume changed to " + QString::number(volume));
    }

    delete soundSettingsDialog;

}


void Start::on_howtoplay_clicked()
{
    QMessageBox* helpWindow = new QMessageBox;
    helpWindow->setWindowFlags(Qt::CustomizeWindowHint);

    helpWindow->setText("(add instructions on how to play)");
    helpWindow->setStyleSheet("background-color: rgb(237, 230, 180); color: black;");

    QPushButton* OK = new QPushButton("OK");
    helpWindow->addButton(OK, QMessageBox::RejectRole);
    helpWindow->exec();
}


void Start::on_Quit_clicked()
{
    QMessageBox* confirmQuit = new QMessageBox;
    confirmQuit->setWindowFlags(Qt::CustomizeWindowHint);
    confirmQuit->setText("Are you sure you would like to quit?");
    confirmQuit->setStyleSheet("background-color: rgb(237, 230, 180); color: black;");

    QPushButton* cancel = new QPushButton("Cancel");
    confirmQuit->addButton(cancel, QMessageBox::ActionRole);
    QPushButton* quit = new QPushButton("Quit");
    confirmQuit->addButton(quit, QMessageBox::ActionRole);
    confirmQuit->exec();

    if (confirmQuit->clickedButton() == cancel)
    {
        delete confirmQuit;
    }
    else
        QCoreApplication::quit();

}

