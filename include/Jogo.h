#include "Baralho.h"
#include "Player.h"
#include "Dealer.h"

public class Jogo{
    private vector<Player> jogadores;
    private Baralho deck;
    
    public void quemGanhou();
    public void addPlayer(Player jogador);
    public void removePlayers();
};



