#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
    void timeout();
    void updateProgressBar();
    void setGameInfoText(QString text, short fontSize);
    void switchPlayer();
    void startTimer();
    
private slots:
    void on_startButton_clicked();
    void on_stopButton_clicked();
    void on_player1Button_clicked();
    void on_player2Button_clicked();
    
    void on_shortGame_clicked();
    
    void on_longGame_clicked();
    
private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *pQTimer;
};
#endif // MAINWINDOW_H
