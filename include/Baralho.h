#ifndef BARALHO_H
#define BARALHO_H

#include "Carta.h"
using namespace std;

class Baralho {

private:
	vector<Carta> baralho;
	void embaralha();

public:
	vector<Carta> criaBaralho();


};

#endif // !BARALHO_H
