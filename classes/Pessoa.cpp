#include "Pessoa.h"
string Pessoa::getName(){
    return name;
}

void Pessoa::setName(string nome){
    name = nome;//funcao pra copiar, atribuicao direta funciona??
}

/*int Pessoa::getPontosCartas(){
    pontosCartas = 0;
    for(int i = 0; i < (int) mao.size(); i++){
        pontosCartas += mao[i].getValor();
    }
    return pontosCartas;
}*/

int Pessoa::getPontosCartas(){
    return 0;
}

void Pessoa::setPontosCartas(int x){
    pontosCartas = x;
}

vector<Carta> Pessoa::getMao(){
    return mao;
}

void Pessoa::setMao(Carta carta){
    mao.push_back(carta);
}

void Pessoa::cleanMao(){
    mao.clear();
}

int Pessoa::getPontoTotal(){
    return pontoTotal;
}

void Pessoa::setPontoTotal(int x){
    pontoTotal = x;
}

void Pessoa::setAction(bool acao){
    action = acao;
}

bool Pessoa::getAction(){
    return action;
}
