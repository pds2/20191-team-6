#include "Menu.h"

Menu::Menu(int n_jogadores, int n_rodadas){
    setNumJogadores(n_jogadores);
    setNumRodadas(n_rodadas);
}


void Menu::criaJogadores(){

    for (int i = 1; i <= numJogadores; i++) {
        cout << "Insira o nome do jogador " << i << endl;
        cout << "Nome: ";
        cin >> reader;
        Player* jogador = new Player(reader);
        jogadores.push_back(jogador);
    }
}

void Menu::executaMenu(){
    // oq tem que fazer aqui ?
}

void Menu::init(){

    criaJogadores();
    executaMenu();

}

void Menu::setNumJogadores(int n_jogadores){
    numJogadores = n_jogadores;
}

int Menu::getNumJogadores(){
    return numJogadores;
}

void Menu::setNumRodadas(int n_rodadas){
    numRodadas = n_rodadas;
}

int getNumRodadas(){
    return numRodadas;
}
