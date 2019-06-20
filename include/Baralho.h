#ifndef BARALHO_H
#define BARALHO_H


#include "Carta.h"
#include <vector>
#include <cstdlib>

class Baralho{

public:

	Baralho();//construtor
	~Baralho();//destrutor

	vector<Carta> baralho;
	
    void darCarta(Carta carta);
};



#endif // !BARALHO_H
