#include "Baralho.h"
#include "Jogo.h"
#include "Player.h"
#include "Dealer.h"
#include "Rodada.h"
#include "Menu.h"

using namespace std;

int main (){

    int n_rodadas, n_jogadores;

    cout << "Bemvindo  e etc" << endl;
    cout << "Regras do jogo" << endl;
    cout << "Escolha o numero de jogadores:" << endl;
    cin >> n_jogadores;
    cout << "Escolha o numero de rodadas" << endl;
    cin >> n_rodadas;

    //instanciar um Menu
    Menu menu = Menu(n_jogadores);
    menu.init();

    Jogo jogo = Jogo();
    //setar o jogo
    //construir o estado inicial

    //chamar as rodadas dentro do jogo

    //verificar e-ou controlar cartas dadas, quem quer mais cartas

    //terminar a rodada e começar outra

    //reiniciar jogo ou matar programa

    cout << "Numero de jogadores: " << n_jogadores << endl;
    cout << "Numero de rodadas: " << n_rodadas << endl;

    return 0;
}
