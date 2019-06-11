#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Carta.h"
using namespace std;

class Jogador {

private:
	Jogador(/* args */);
	~Jogador();

	vector<int> idCartas;
	string nomeJogador;
	double saldo;
	double aposta;
	int valorMao;
	int numeroAS;
	int numeroCartas;
	string reader;

public:

	void fazJogada(int id, vector<Carta> baralho);
	void fazAposta();
	void setNome(int id);
	void aumentaSaldo(double valor);
	void diminuiSaldo(double valor);
	void dobrar();
	void pegaCarta(int id, int valor);
	void descartaMao();
	void imprimeMao(vector<Carta> baralho);
	void getNome();
	void getSaldo();
	void getAposta();
	void getValorMao();
	vector<int> getIDcartas();

};

#endif // !JOGADOR_H
