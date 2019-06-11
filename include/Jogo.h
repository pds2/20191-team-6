#ifndef JOGO_H
#define JOGO_H

#include "Baralho.h"
#include "Player.h"
#include "Dealer.h"

class Jogo{

private:
    vector<Player> jogadores;
    Baralho deck;
    
public:
	Jogo();
	~Jogo();
	void quemGanhou();
    void addPlayer(Player jogador);
    void removePlayers();
};

#endif // !JOGO_H