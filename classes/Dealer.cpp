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

int Dealer::getPontosCartas(){
    pontosCartas = 0;
    for(int i = 0; i < (int) mao.size(); i++){
        pontosCartas += mao[i].getValor();
    }
    //soma valor carta fechada
    pontosCartas += cartaFechada.getValor();
    return pontosCartas;
}

