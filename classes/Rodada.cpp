#include "Rodada.h"

//refazer função, checar quem ganhou na rodada
//quem fez 21, se teve empate e os criterios de desempate...


void Jogo::quemGanhou(Dealer dealer){
    int maior, indice, i;
    maior = -1;
	indice = 0;
	int indice2;
	bool empate = false;
	bool looser = false;
    for(i = 0; i < jogadores.size(); i++){
        if(jogadores[i].getPontosCartas() > maior && jogadores[i].getPontosCartas() < 22){
            maior = jogadores[i].getPontosCartas();
            indice = i;
        }
    }
	for(int i = 0; i < jogadores.size(); i++){
		if(jogadores[i].getPontosCartas() == maior && i != indice ){
            if(jogadores[i].mao.size() < jogadores[indice].mao.size()){
				indice = i;
			}
			else if(jogadores[i].mao.size() == jogadores[indice].mao.size()){
				indice2 = i;
				empate = true;
			}
        }
	}
	if(dealer.getPontosCartas() > jogadores[i].getPontosCartas() && dealer.getPontosCartas() < 22){
		looser = true;
	}
	if(looser){
		cout << "Dealer venceu";
		dealer.setPontoTotal(dealer.getPontoTotal() + 1);
	}
	else{
		if(empate){
        cout << "Os vencedores(as) foram " << jogadores[indice].name << " e " << jogadores[indice2].name << " com " <<  jogadores[indice].pontosCartas << " e com " << jogadores[indice].mao.size() << " cartas na mao";
        jogadores[indice].setPontoTotal(dealer.getPontoTotal() + 1);
		jogadores[indice2].setPontoTotal(dealer.getPontoTotal() + 1);
		}
		else{
			cout << "O vencedor(a) foi " << jogadores[indice].name <<  " com " <<  jogadores[indice].pontosCartas  << " cartas na mao";
            jogadores[indice].setPontoTotal(dealer.getPontoTotal() + 1);
		}
	}
}
