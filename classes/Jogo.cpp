#include "Jogo.h"
#include <stdlib>

Jogo::Jogo(){
    deck = Baralho();
}

void Jogo::quemGanhou(){
    int maior, indice;
    maior = 0;
    for(int i = 0; i < jogadores.size(); i++){
        if(jogadores[i].pontoTotal > maior){
            maior = jogadores[i].pontoTotal;
            indice = i;
        }
    }
    cout << "O vencedor(a) foi " << jogadores[indice].name << " com " << jogadores[indice].pontoTotal << " pontos.\n"   
}

void Jogo::addPlayers(Player jogador){
    jogadores.push_back(jogador);
}

void Jogo::removePlayers(){
    while(jogadores.size() > 0){
        jogadores.pop_back(); 
    }   
}
