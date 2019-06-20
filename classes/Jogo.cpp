#include "Jogo.h"

Jogo::Jogo(int n_rodadas){
    setNumRodadas(n_rodadas);
    deck = Baralho();
}

Jogo::~Jogo(){
    delete &deck;
}

void Jogo::setNumRodadas(int n_rodadas){
    numRodadas = n_rodadas;
}

int Jogo::getNumRodadas(){
    return numRodadas;
}

void Jogo::quemGanhou(){
    int maior, indice = 0;
    maior = 0;
    for(int i = 0; i < (int)jogadores.size(); i++){
        if(jogadores[i].getPontoTotal() > maior){
            maior = jogadores[i].getPontoTotal();
            indice = i;
        }
    }
    cout << "O vencedor(a) foi " << jogadores[indice].getName() << " com " << jogadores[indice].getPontoTotal() << " pontos.\n";
}

void Jogo::addPlayer(Player jogador){
    jogadores.push_back(jogador);
}

void Jogo::removePlayers(){
    while(jogadores.size() > 0){
        jogadores.pop_back();
    }
}
