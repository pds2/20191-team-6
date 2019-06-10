#include "Player.h"

/*void Jogador::fazJogada(int id, vector<Carta> baralho) {
    
}

void Jogador::fazAposta() {

}

void Jogador::setNome(int id) {

}

void Jogador::aumentaSaldo(double valor) {

}
void Jogador::diminuiSaldo(double valor) {

}

void Jogador::dobrar() {

}

void Jogador::pegaCarta(int id, int valor) {

}

void Jogador::descartaMao() {

}

void Jogador::imprimeMao(vector<Carta> baralho) {

}

void Jogador::getNome() {

}

void Jogador::getSaldo() {

}

void Jogador::getAposta() {

}

void Jogador::getValorMao() {

}

vector<int> Jogador::getIDcartas() {

}*/

void Player::Player(string nome){
    setName(nome);
}

string Player::getName(){
    return name;
}
public Player::setName(){
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
