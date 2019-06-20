#ifndef JOGO_H
#define JOGO_H

#include "Baralho.h"
#include "Player.h"
#include "Dealer.h"

class Jogo{

private:
    int numRodadas;

public:

	Jogo(int n_rodadas);
	~Jogo();

    static vector<Player> jogadores;
    Baralho deck;

    void setNumRodadas(int n_rodadas);
    int getNumRodadas();
	void quemGanhou();
    void addPlayer(Player jogador);
    void removePlayers();
};

#endif // !JOGO_H
