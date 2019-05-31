#ifndef CARTA_H
#define CARTA_H

#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class Carta {

private:
	string nome;
	string naipe;
	int valor;
	bool isOnTable;
	void setValor(string nome);

public:
	Carta(string input_nome, string input_naipe);
	~Carta();

	void puxarCarta();
	int getValor();
	string getNome();
	string getNaipe();
	bool foiUsado();

};

Carta::Carta(string input_nome, string input_naipe)
{
	nome = input_nome;
	naipe = input_naipe;
	setValor(input_nome);
}

Carta::~Carta()
{
}

#endif // !CARTA_H
