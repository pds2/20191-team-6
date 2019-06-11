#ifndef DEALER_H
#define DEALER_H

#include "Player.h"
#include "Carta.h"

class Dealer : public Player{

private:
    Carta cartaFechada;
    
public:
	Dealer();
	~Dealer();
	
	Carta getCartaFechada();
    void setCartaFechada();
};


#endif // !DEALER_H