﻿#include "Baralho.h"

/*void Baralho::embaralha() {
	int random = rand() % 100;
	for (int i = 0; i < random; i++) {

	}
}

vector<Carta> Baralho::criaBaralho() {
	string nomeCarta;
	string naipeCarta;
	this->baralho.begin();

	for (int deck = 1; deck <= 6; deck++) {
		for (int carta = 1; carta <= 13; carta++) {
			for (int naipe = 1; naipe <= 4; naipe++) {

				if (naipe == 1)
					naipeCarta = "♣";

				else if (naipe == 2)
					naipeCarta = "♥";

				else if (naipe == 3)
					naipeCarta = "♠";

				else
					naipeCarta = "♦";

				if (carta == 1)
					nomeCarta = "A";

				else if (carta == 11)
					nomeCarta = "J";

				else if (carta = 12)
					nomeCarta = "Q";

				else if (carta = 13)
					nomeCarta = "K";

				else
					nomeCarta = to_string(carta);

				Carta novaCarta = Carta(nomeCarta, naipeCarta);
				this->baralho.push_back(novaCarta);
			}
		}
	}
}*/

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
