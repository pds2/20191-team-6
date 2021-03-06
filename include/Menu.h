#ifndef MENU_H
#define MENU_H

#include "Jogo.h"

class Menu{

private:
    int numJogadores;
    void criaJogadores();

public:

    Menu(int n_jogadores);
    ~Menu();

    static vector<Player> jogadores;

    void init();
    void setNumJogadores(int n_jogadores);
    int getNumJogadores();
    void setNumRodadas(int n_rodadas);
    int getNumRodadas();

};

#endif // !MENU_H
