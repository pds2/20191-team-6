#include "Dealer.h"

Carta Dealer::getCartaFechada(){
    return cartaFechada;
}
void Dealer::setCartaFechada(Carta carta){
    cartaFechada = Carta(carta.getNaipe(), carta.getNumeroCarta(), carta.getValor(), carta.getFlag());
}
