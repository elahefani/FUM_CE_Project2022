#include <Player.h>
#include <mainwindow.h>

Player::Player(){
    Money = 0;
    Pair = 0;
    Coordinates = 0;
}

void Player::setMoney(long long int Money){
    this->Money = Money;
}

long long int Player::getMoney(){
    return Money;
}

void Player::setPair(int Pair){
    this->Pair = Pair;
}

int Player::getPair(){
    return Pair;
}
