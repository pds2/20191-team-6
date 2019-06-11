#include "Player.h"

void Player::Player(string nome){
    setName(nome);
	setPontoTotal(0);
}

string Player::getName(){
    return name;
}
void Player::setName(string nome){
    name = nome;//funcao pra copiar, atribuicao direta funciona??    
}

int Player::getPontosCartas(){
    return pontosCartas;
}
int Player::setPontosCartas(int x){
    pontosCartas = x;
}

vector<carta> Player::getMao(){
    return mao;
}
void Player::setMao(Carta carta){
    mao.push_back(carta);
}
void Player::cleanMao(){
    while(mao.size > 0) {
        mao.pop_back();
    }
}

int Player::getPontoTotal(){
    return pontoTotal;
}
void Player::setPontoTotal(int x){
    pontoTotal = x;
}
