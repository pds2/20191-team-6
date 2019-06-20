#include "Player.h"

Player::Player(){
}

Player::~Player()
{
}

string Player::getName(){
    return name;
}

void Player::setName(string nome){
    name = nome;//funcao pra copiar, atribuicao direta funciona??
}

int Player::getPontosCartas(){
    pontosCartas = 0;
    for(int i = 0; i < (int) mao.size(); i++){
        pontosCartas += mao[i].getValor();
    }
    return pontosCartas;
}

void Player::setPontosCartas(int x){
    pontosCartas = x;
}

vector<Carta> Player::getMao(){
    return mao;
}

void Player::setMao(Carta carta){
    mao.push_back(carta);
}

void Player::cleanMao(){
    mao.clear();
}

int Player::getPontoTotal(){
    return pontoTotal;
}

void Player::setPontoTotal(int x){
    pontoTotal = x;
}

void Player::setAction(bool acao){
    action = acao;
}

bool Player::getAction(){
    return action;
}
