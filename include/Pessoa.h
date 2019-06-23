#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Carta.h"

class Pessoa{

private:
    string name;
    int pontoTotal;
    bool action;

public:
    int pontosCartas;
    
    vector<Carta> mao;

    string getName();
    void setName(string nome);
    virtual int getPontosCartas();
    void setPontosCartas(int x);
    vector<Carta> getMao();
    void setMao(Carta carta);
    void cleanMao();
    int getPontoTotal();
    void setPontoTotal(int x);
    void setAction(bool acao);
    bool getAction();

};

#endif // !PESSOA_H
