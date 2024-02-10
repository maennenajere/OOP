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
    void on_igotyou_stateChanged(int arg1);

    void on_countButton_clicked();

    void on_resetButton_clicked();

    void on_lineEdit_returnPressed();

    void on_result_returnPressed();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
