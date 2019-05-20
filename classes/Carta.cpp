#include "Carta.h"

void Carta::setValor(string nome) {
	if (nome.compare("A")) {
		this->valor = 11;
	}
	else if (nome.compare("J") || nome.compare("Q") || nome.compare("K")) {
		this->valor = 10;
	}
	else {
		this->valor = stoi(nome, nullptr);
	}
}

void Carta::puxarCarta() {
	this->isOnTable = true;
}

int Carta::getValor() {
	return this->valor;
}

string Carta::getNome() {
	return this->nome;
}

string Carta::getNaipe() {
	return this->naipe;
}

bool Carta::foiUsado() {
	return this->isOnTable;
}