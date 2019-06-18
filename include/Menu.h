#ifndef MENU_H
#define MENU_H

#include "Jogo.h"

class Menu {
private:
    vector<Player> jogadores;
    int numJogadores;
    string reader;
    void criaJogadores(int id);
    void saldoInicial(int numJogadores);

public:
    Menu(int n_jogadores);
    ~Menu();

    vector<Player> executaMenu();
    void init();
    void setNumJogadores();
    int getNumJogadores();

};

Menu::~Menu()
{
}


#endif // !MENU_H
