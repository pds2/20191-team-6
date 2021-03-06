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
        Player jogador = Player();
        jogador.setName(reader);
        jogador.setPontosCartas(0);
        jogador.setPontoTotal(0);
        jogador.setAction(true);
        jogadores.push_back(jogador);
        reader.clear();
    }
}



void Menu::init(){

    criaJogadores();

}

void Menu::setNumJogadores(int n_jogadores){
    numJogadores = n_jogadores;
}

int Menu::getNumJogadores(){
    return numJogadores;
}
