#include "Jogo.h"

class Rodada : public Jogo {
    
public:
	void sortearCartas(Baralho deck, vector<Players> jogadores, Dealer dealer);
    void limparMao(vector<Players> jogadores);
    void start();//construtor?
    void kill();//destrutor?
    void quemGanhou(Dealer dealer);//override
};
