//#include "ui_mainwindow.h"
#include <Game.h>
#include <mainwindow.h>

Game::Game(){
    NumOfPlayer = 0;
    for (int i = 0; i < MaxSizeOfPlayer; ++i) {
        player[i] = new Player;
    }
}

void Game::setNumOfPlayer(int NumOfPlayer){
    this->NumOfPlayer = NumOfPlayer;
}

int Game::getNumOfPlayer(){
    return NumOfPlayer;
}

void Game::setDefPlayer(){
    for(int i; i<NumOfPlayer; i++){
        //playe = new QLabel(this);
        player[i]->setMoney(1500);
        //player[i]->setPair(0);
    }
}
