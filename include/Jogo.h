#ifndef JOGO_H
#define JOGO_H

#include "Baralho.h"
#include "Player.h"
#include "Dealer.h"

class Jogo{

private:
    static vector<Player> jogadores;
    Baralho deck;
    int numRodadas;

public:
	Jogo();
	~Jogo();
    void setNumRodadas(int n_rodadas);
    int getNumRodadas();
	void quemGanhou();
    void addPlayer(Player jogador);
    void removePlayers();
};

#endif // !JOGO_H
