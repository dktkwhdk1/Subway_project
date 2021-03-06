#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QMessageBox>
#include "Subway.h"
#include <iostream>
#include <fstream>
#include <stack> // 지하철 경로를 출력할때 필요
#include <string>
#include <QString>
#include <QListWidget>
#include <QListWidgetItem>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    static QString start;
    static QString end;
    static int cnt;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:

    void on_pushButton_3_clicked();

    void on_search1_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
