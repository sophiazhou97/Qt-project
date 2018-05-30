#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QString>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    public slots:
    void get_info1(int);
    void get_info2(int);
    void get_info3(int);
    void get_info4(int);
    void get_info5(int);
    void get_info6(int);
    void get_info7(int);
    void get_info8(int);
    void get_info9(int);
    void get_info10(int);
    void get_info11(int);
    void update() ;
    void update2();


private:
    Ui::MainWindow *ui;
    int value1;
    int value2;
    int value3;
    int value4;
    int value5;
    int value6;
    int value7;
    int value8;
    int value9;
    int value10;
    int value11;
    int higher;
    QPushButton button1;
    QPushButton button2;
};

#endif // MAINWINDOW_H
