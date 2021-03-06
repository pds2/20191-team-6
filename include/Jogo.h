#ifndef JOGO_H
#define JOGO_H

#include "Baralho.h"
#include "Player.h"
#include "Dealer.h"

class Jogo{

private:
    int numRodadas;

public:

	Jogo(int n_rodadas, vector<Player> J);
	~Jogo();

    static vector<Player> jogadores;
    Baralho deck;

    void setNumRodadas(int n_rodadas);
    int getNumRodadas();
    void quemGanhou();
    void quemGanhouRodada(Dealer dealer);
    void addPlayer(Player jogador);
    void removePlayers();
    void statusGeral();
    void statusRodada(Dealer dealer, vector<string> naipes, vector<string> nomeCarta);
};

#endif // !JOGO_H
