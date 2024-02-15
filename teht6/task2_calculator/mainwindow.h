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
    void numberClickedHandler();
    void clearAndEnterClickedHandler();
    void addSubMulDivClickedHandler();
    void resetLineEdits();
    void on_num1_textChanged(const QString);
    void on_num2_textChanged(const QString);
    void on_result_textChanged(const QString);

private:
    Ui::MainWindow *ui;
    QString num1, num2;
    int state;
    short operand;
    float result;

    void resetCalculator();
};
#endif // MAINWINDOW_H
