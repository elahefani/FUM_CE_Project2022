#include "mainwindow.h"
#include "Game.h"
#include "Player.h"
#define MaxSizeOfPlayer 8

#include <QApplication>

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
