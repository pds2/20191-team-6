#include "Jogo.h"


public class Rodada : public Jogo {
    
    
    public void sortearCartas(Baralho deck, vector<Players> jogadores, Dealer dealer);
    public void limparMao(vector<Players> jogadores);
    public void start();//construtor
    public void kill();//destrutor
    @Override
    public void quemGanhou();
};

public Rodada::Rodada(){

}

public Rodada::~Rodada(){

}
//refazer função, checar quem ganhou na rodada
//quem fez 21, se teve empate e os criterios de desempate...


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
