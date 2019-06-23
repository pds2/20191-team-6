#ifndef DEALER_H
#define DEALER_H

#include "Player.h"
#include "Carta.h"
#include "Pessoa.h"

class Dealer : public Pessoa{

private:
    Carta cartaFechada;

public:
    Dealer(); 
    ~Dealer();
    Carta getCartaFechada();
    void setCartaFechada(Carta carta);
    int getPontosCartas() override;
};

#endif // !DEALER_H
