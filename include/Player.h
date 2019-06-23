#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Carta.h"
#include "Pessoa.h"

class Player : public Pessoa{

public:
    Player();
    ~Player();

    int getPontosCartas() override;

};

#endif // !PLAYER_H
