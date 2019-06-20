#include "Carta.h"

Carta::Carta(int naipeIn, int numeroCartaIn, int valorIn, bool flag){
    setNaipe(naipeIn);
    setNumeroCarta(numeroCartaIn);
    setValor(valorIn);
}

Carta::Carta(){
    setNaipe(0);
    setNumeroCarta(0);
    setValor(0);
    setFlag(true);
}
    //get e set pro naipe
    //Ouros = 1
    //Paus = 2
    //Copas = 3
    //Espada = 4
int Carta::getNaipe(){
    return naipe;
}
void Carta::setNaipe(int x){
    naipe = x;
}

    //get e set pro numero ou figura da carta
    //J = 11
    //Q = 12
    //K = 13
int Carta::getNumeroCarta(){
    return numeroCarta;
}
void Carta::setNumeroCarta(int x){
    numeroCarta = x;
}

//get e set pro valor da carta
//check do Ás se vale 1 ou 11 feita em jogador
//precisa do numero de cartas para checar
int Carta::getValor(){
    return valor;
}
void Carta::setValor(int x){
    valor = x;
}

bool Carta::getFlag(){
    return flag;
}
void Carta::setFlag(bool x){
    flag = x;
}
