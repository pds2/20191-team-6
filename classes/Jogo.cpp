#include "Jogo.h"

Jogo::Jogo(int n_rodadas, vector<Player> J){
    setNumRodadas(n_rodadas);
    jogadores = J;
    deck = Baralho();
}

Jogo::~Jogo(){
    // delete &deck;
}

vector<Player> Jogo::jogadores;

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
void Jogo::quemGanhouRodada(Dealer dealer){
    int maior, indice, i;
    maior = -1;
	indice = 0;
	int indice2;
	bool empate = false;
	bool looser = false;
    for(i = 0; i < (int)jogadores.size(); i++){
        if(jogadores[i].getPontosCartas() > maior && jogadores[i].getPontosCartas() < 22){
            maior = jogadores[i].getPontosCartas();
            indice = i;
        }
    }
	for(int i = 0; i < (int)jogadores.size(); i++){
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
	if((dealer.getPontosCartas() > jogadores[i].getPontosCartas()) && (dealer.getPontosCartas() < 22)){
		looser = true;
	}
	if(looser){
		cout << "Dealer venceu";
		dealer.setPontoTotal(dealer.getPontoTotal() + 1);
	}
	else{
		if(empate){
                    cout << "Os vencedores(as) foram " << jogadores[indice].getName() << " e " << jogadores[indice2].getName() << " com " <<  jogadores[indice].getPontosCartas() << " e com " << jogadores[indice].mao.size() << " cartas na mao";
                    jogadores[indice].setPontoTotal(jogadores[indice].getPontoTotal() + 1);
		    jogadores[indice2].setPontoTotal(jogadores[indice2].getPontoTotal() + 1);
		}
		else{
			cout << "O vencedor(a) foi " << jogadores[indice].getName() <<  " com " <<  jogadores[indice].getPontosCartas()  << " cartas na mao";
            jogadores[indice].setPontoTotal(jogadores[indice].getPontoTotal() + 1);
		}
	}
}


void Jogo::addPlayer(Player jogador){
    jogadores.push_back(jogador);
}

void Jogo::removePlayers(){
    jogadores.clear();
}

void Jogo::statusGeral(){
    for(int i = 0; i < (int) jogadores.size(); i++){
        cout << "\n" << jogadores[i].getName() << ":\n" << "\nPontos totais no jogo: " << jogadores[i].getPontoTotal() << "\n";
    }
}
void Jogo::statusRodada(Dealer dealer, vector<string> naipes, vector<string> nomeCarta){
    bool as11 = false;
    int valor = 0;
//FAZER O PRINT DO STATUS DO DEALER!!!!!!!!!!!!!!!!!!!!!
    cout << "\n" << dealer.getName();
    if(dealer.mao.size() == 0){
        cout << "None";
    }   
    else{
        for(int a = 0; a < (int) dealer.mao.size(); a++){
            if((dealer.mao[a].getNumeroCarta() > 9) && dealer.mao.size() == 2) as11 = true;
        }
        for(int j = 0; j < (int) dealer.mao.size(); j++){
            valor = dealer.mao[j].getValor();
            if(valor == 1 && as11) dealer.mao[j].setValor(11);
            cout << nomeCarta[dealer.mao[j].getNumeroCarta() - 1] << " de " << naipes[dealer.mao[j].getNaipe() - 1] << "\n";
        }
    } 
    cout << "Valor das cartas: " << dealer.getPontosCartas() << "\n";

    as11 = false;

    for(int i = 0; i < (int) jogadores.size(); i++){
        cout << "\n" << jogadores[i].getName() << ":\n" << "\nCartas na mao: ";
        if(jogadores[i].mao.size() == 0){
            cout << "None";
        }   
        else{
            for(int k = 0; k < (int) jogadores[i].mao.size(); k++){
                if((jogadores[i].mao[k].getNumeroCarta() > 9) && jogadores[i].mao.size() == 2) as11 = true;
            }
            for(int j = 0; j < (int) jogadores[i].mao.size(); j++){
                valor = jogadores[i].mao[j].getValor();
                if(valor == 1 && as11) jogadores[i].mao[j].setValor(11);
                cout << nomeCarta[jogadores[i].mao[j].getNumeroCarta() - 1] << " de " << naipes[jogadores[i].mao[j].getNaipe() - 1] << "\n";
            }
        } 
        as11 = false;
    cout << "Valor das cartas: " << jogadores[i].getPontosCartas() << "\n";
    }
} 
