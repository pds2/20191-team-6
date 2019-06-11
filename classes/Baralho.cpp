#include "Baralho.h"

void Baralho::Baralho(){
    int valorAux;
    for(int i = 1; i < 5; i++){
        for(j = 1; j < 14; j++){
            valorAux = j;
            if (valorAux > 10) valorAux = 10;
            Carta cartaAux = Carta(i, j, valorAux, true);
            baralho.push_back(carta);
            //destrutor da carta?
        }
    }
}

void Baralho::~Baralho(){
    for(int i = 0; i < 42; i++){
        baralho.pop_back();
    }
}

void Baralho::darCarta(Carta carta){
    while(true){
        int random = rand() % 42;
        if(baralho[random].flag){
            carta.setNaipe(baralho[random].getNaipe);
            carta.setNumeroCarta(baralho[random].getNumeroCarta);
            carta.setValor(baralho[random].getValor);
            baralho[random].flag = false;
            break;
        }
    }    
}
