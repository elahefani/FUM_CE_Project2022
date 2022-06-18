#include<Game.h>
#include<mainwindow.h>

Game::Game(){
    NumOfPlayer = 0;

}

void Game::setNumOfPlayer(int NumOfPlayer){
    this->NumOfPlayer = NumOfPlayer;
}

int Game::getNumOfPlayer(){
    return NumOfPlayer;
}
