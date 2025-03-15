#ifndef START_H
#define START_H

#include <QDialog>
#include <QMediaPlayer>
#include <QSoundEffect>
#include <QAudioOutput>
#include <QSlider>
#include <QCoreApplication>
namespace Ui {
class Start;
}

class Start : public QDialog
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = nullptr);
    ~Start();
    QMediaPlayer backgroundMusicPlayer;
    QAudioOutput audiooutput;
private slots:
    void on_start_clicked();

    void on_sound_clicked();

    void on_howtoplay_clicked();

    void on_Quit_clicked();

private:
    Ui::Start *ui;
};

#endif // START_H
