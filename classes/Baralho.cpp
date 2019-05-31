#include "Baralho.h"

void Baralho::embaralha() {
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

				Carta novaCarta = new Carta(nomeCarta, naipeCarta);
				this->baralho.push_back(novaCarta);
			}
		}
	}
}