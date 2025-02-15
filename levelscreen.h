#ifndef LEVELSCREEN_H
#define LEVELSCREEN_H

#include <QMainWindow>
#include <mainwindow.h>

namespace Ui {
class Levelscreen;
}

class Levelscreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit Levelscreen(QWidget *parent = 0);
    ~Levelscreen();
    MainWindow w;
    QString currentUser;
    int level;
    void showAdminButton();
    void hideButtons(int, int);
    void unhideHelper(int);
    QString toQString(std::string const &s);
    bool cancel;
    Network myNetwork;

signals:
    void game_started(int);

private slots:
    void on_playButton_pressed();

    void on_extremeButton_pressed();

    void on_easyButton_pressed();

    void on_mediumButton_pressed();

    void on_hardButton_pressed();

    void on_veryhardButton_pressed();

    void on_menu_pressed();

    void on_adminButton_clicked();

    void on_adminButton_2_clicked();

    void on_adminButton_3_clicked();

private:
    Ui::Levelscreen *ui;
};

#endif // LEVELSCREEN_H
