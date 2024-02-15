#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_countButton_clicked();          // count button
    void on_resetButton_clicked();          // reset button
    void on_resultBox_returnPressed();      // show button results
    void on_iGotYou_stateChanged(int arg1); // checkbox

private:
    Ui::MainWindow *ui;       // ui
    int count;                // counter value
};

#endif // MAINWINDOW_H
