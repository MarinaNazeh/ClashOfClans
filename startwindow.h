#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QDialog>

namespace Ui {
class startwindow;
}

class startwindow : public QDialog
{
    Q_OBJECT

public:
    explicit startwindow(QWidget *parent = nullptr);
    ~startwindow();
    void updateProgressBar();
private slots:




private:
    Ui::startwindow *ui;
};

#endif // STARTWINDOW_H
