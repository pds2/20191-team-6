#include "Menu.h"

Menu::Menu(int n_jogadores){
    setNumJogadores(n_jogadores);
}

Menu::~Menu()
{
}

vector<Player> Menu::jogadores;

void Menu::criaJogadores(){
    string reader;

    for (int i = 1; i <= numJogadores; i++) {
        cout << "Insira o nome do jogador " << i << endl;
        cout << "Nome: ";
        cin >> reader;
        Player jogador = Player(reader);
        jogadores.push_back(jogador);
        reader.clear();
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
