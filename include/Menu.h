#ifndef MENU_H
#define MENU_H

#include "Jogo.h"

class Menu{

private:
    vector<Player> jogadores;
    int numJogadores;
    int numRodadas;
    string reader;
    void criaJogadores();

public:
    Menu(int n_jogadores);
    ~Menu();

    void init();
    void setNumJogadores(int n_jogadores);
    int getNumJogadores();
    void setNumRodadas(int n_rodadas);
    int getNumRodadas();

};

Menu::~Menu()
{
}


#endif // !MENU_H
