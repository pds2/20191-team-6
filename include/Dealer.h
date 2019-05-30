#ifndef DEALER_H
#define DEALER_H

#include "Jogador.h"

class Dealer : public Jogador{

private:
    /* data */
public:
    Dealer(/* args */);
    ~Dealer();
    virtual void pegarCarta();
    virtual void descartaMao();
    virtual void imprimeMao(vector<Carta> baralho);
    
};


#endif // !DEALER_H