#include "Dealer.h"
/*
void Dealer::pegarCarta(){

}

void Dealer::descartaMao(){

}

void Dealer::imprimeMao(vector<Carta> baralho){

}*/

Carta getCartaFechada(){
    return cartaFechada;
}
void setCartaFechada(Carta carta){
    cartaFechada = Carta(carta.naipe, carta.numeroCarta, carta.valor, carta.bool);
}
