#include "Dealer.h"

Dealer::Dealer(){
}
Dealer::~Dealer(){
}

Carta Dealer::getCartaFechada(){
    return cartaFechada;
}
void Dealer::setCartaFechada(Carta carta){
    cartaFechada = Carta(carta.getNaipe(), carta.getNumeroCarta(), carta.getValor(), carta.getFlag());
}

int Dealer::getPontosCartasDealer(){
    cout << (getPontosCartas() + cartaFechada.getValor());
    cout << "\n mao aberta: " << getPontosCartas(); 
    return (getPontosCartas() + cartaFechada.getValor());
}
