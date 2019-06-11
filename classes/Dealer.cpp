#include "Dealer.h"

Carta getCartaFechada(){
    return cartaFechada;
}
void setCartaFechada(Carta carta){
    cartaFechada = Carta(carta.naipe, carta.numeroCarta, carta.valor, carta.bool);
}
