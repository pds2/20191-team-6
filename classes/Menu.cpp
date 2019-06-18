#include "Menu.h"


//ISSO VIRA O MAIN??? PROVAVEL, MAS CHECAR MAIS TARDE
Menu::Menu(int n_jogadores){
    setNumJogadores(n_jogadores);
}


void Menu::criaJogadores(int id){

}

void Menu::saldoInicial(int n_jogadores){

}

vector<Jogador> Menu::executaMenu(){

}

void Menu::init(){

    for (int i = 1; i <= numJogadores; i++) {
        cout << "Insira o nome do jogador " << i << endl;
        cout << "Nome: ";
        cin >> reader;
        Player* jogador = new Player(reader);
        jogadores.push_back();
    }

}

void Menu::setNumJogadores(int n_jogadores){
    numJogadores = n_jogadores;
}

int Menu::getNumJogadores(){

}
