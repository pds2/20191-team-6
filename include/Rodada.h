#include "Jogo.h"


public class Rodada : public Jogo {
    
    
    public void sortearCartas(Baralho deck, vector<Players> jogadores, Dealer dealer);
    public void limparMao(vector<Players> jogadores);
    public void start();//construtor
    public void kill();//destrutor
    @Override
    public void quemGanhou();
};

