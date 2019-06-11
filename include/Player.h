#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Carta.h"

class Player{

private:
    string name;
    int pontosCartas;
    vector<Carta> mao;
    int pontoTotal;

public:
    Player(string nome);
    ~Player();

    string getName();
    void setName(string nome);
    int getPontosCartas();
    void setPontosCartas(int x);
    vector<Carta> getMao();
    void setMao(Carta carta);
    void cleanMao();
    int getPontoTotal();
    void setPontoTotal(int x);
    
};


#endif // !PLAYER_H