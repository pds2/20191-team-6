#ifndef BARALHO_H
#define BARALHO_H

#include "Carta.h"
using namespace std;

class Baralho
{
private:
	vector<Carta> baralho;
	void embaralha();
	
public:
	Baralho(/* args */);
	~Baralho();
	vector<Carta> criaBaralho();
};

Baralho::Baralho(/* args */)
{
}

Baralho::~Baralho()
{
}


#endif // !BARALHO_H