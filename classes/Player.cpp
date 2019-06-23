#include "Player.h"
//virtual int getPontoTotal();

Player::Player(){
}
Player::~Player(){
}

int Player::getPontosCartas(){
    pontosCartas = 0;
    for(int i = 0; i < (int) mao.size(); i++){
        pontosCartas += mao[i].getValor();
    }
    return pontosCartas;
}
