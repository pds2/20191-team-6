#ifndef MENU_H
#define MENU_H

#include "Jogo.h"

class Menu {
private:
    vector<Jogador> jogadores;
    int numJogadores;
    string reader;
    void criaJogadores(int id);
    void saldoInicial(int numJogadores);

public:
    Menu(/* args */);
    ~Menu();
    
    vector<Jogador> executaMenu();
    void init();
    void setNumJogadores();
    int getNumJogadores();

};

Menu::Menu(/* args */)
{
}

Menu::~Menu()
{
}


#endif // !MENU_H