#ifndef BARALHO_H
#define BARALHO_H


#include "Carta.h"
#include <vector>
#include <cstdlib>

class Baralho{

private:
	vector<Carta> baralho;

public:
	Baralho();//construtor
	~Baralho();//destrutor
    void darCarta(Carta carta);
};



#endif // !BARALHO_H
