#include "Baralho.h"
#include "Jogo.h"
#include "Player.h"
#include "Dealer.h"
#include "Menu.h"

using namespace std;

int main (){

    int n_rodadas, n_jogadores;
    vector<string> naipes;
    naipes.push_back("ouro");
    naipes.push_back("paus");
    naipes.push_back("copas");
    naipes.push_back("espada");
    vector<string> nomeCartas;
    naipes.push_back("As");
    naipes.push_back("2");
    naipes.push_back("3");
    naipes.push_back("4");
    naipes.push_back("5");
    naipes.push_back("6");
    naipes.push_back("7");
    naipes.push_back("8");
    naipes.push_back("9");
    naipes.push_back("10");
    naipes.push_back("J");
    naipes.push_back("Q");
    naipes.push_back("K");
    char acao;
    cout << "Bemvindo  e etc" << endl;
    cout << "Regras do jogo" << endl;
    cout << "Escolha o numero de jogadores:" << endl;
    cin >> n_jogadores;
    cout << "Escolha o numero de rodadas" << endl;
    cin >> n_rodadas;
    
    //instanciar um Menu
    Menu menu = Menu(n_jogadores);
    
    //define jogadores e nomes
    menu.init();

    Jogo jogo = Jogo(n_rodadas, menu.jogadores);
    //setar o jogo
    //construir o estado inicial
    Dealer dealer = Dealer();
    dealer.setName("Cassino");
    dealer.setPontosCartas(0);
    dealer.setPontoTotal(0);
    dealer.setAction(true);
    
    cout << "Numero de jogadores: " << n_jogadores << endl;
    cout << "Numero de rodadas: " << n_rodadas << endl;
    
    //bool para checar se tem acoes dos jogadores
    //pra cada rodada, a gente joga
    for(int i = 1; i <= n_rodadas; i++){
        jogo.statusGeral();
        cout << "\nRodada " << i << "\n";
        //dando cartas iniciais
        cout << "\n cria carta";
        Carta carta = Carta();
        cout << "\n da carta";
        carta = jogo.deck.darCarta();
        cout << carta.getNaipe();
        cout << carta.getNumeroCarta();
        cout << carta.getValor();
        cout << "\n seta carta fechada dealer";
        dealer.setCartaFechada(carta);
        cout << "\n da outra carta";
        carta = Carta();
        carta = jogo.deck.darCarta();
        cout << "\n coloca na mao do dealer carta";
        dealer.mao.push_back(carta);
        cout << "\n colocou na mao do dealer";
        for(int j = 0; j < n_jogadores; j++){
            carta = Carta();
            //jogo.deck.darCarta(carta);
            carta = jogo.deck.darCarta();
            jogo.jogadores[j].setMao(carta);
            carta = Carta();
            //jogo.deck.darCarta(carta);
            carta = jogo.deck.darCarta();
            jogo.jogadores[j].setMao(carta);
        }
        cout << "\n passou do for";
        //acoes dos jogadoes
        //jogo.statusRodada(dealer, naipes, nomeCartas);
        //dealer faz sua acao primeiro
        cout << "\n whilw dealer action";
        while(dealer.getAction()){
            cout << "\n checa dealer pontos";
            carta = Carta();
            if(dealer.getPontosCartas() <= 16){
                cout << "\n entrou no if";
                carta = jogo.deck.darCarta();
                //jogo.deck.darCarta(carta);
                cout << "\n deu carta";
                dealer.mao.push_back(carta);
                cout << "\n colocou na mao do dealer nova carta" << dealer.mao.size();
            }
            else{
                dealer.setAction(false);
            }
        }
        //acao de cada jogador
        cout << "\n acoes dos jogadores";
        for(int k = 0; k < n_jogadores; k++){
            cout << "\n entrou no loop dos jogadores";
            jogo.statusRodada(dealer, naipes, nomeCartas);
            while(jogo.jogadores[k].getAction()){ 
                cout << "Acao do jogador " << jogo.jogadores[k].getName();
                cout << "cartas na mao: ";
                for(int x = 0; x < (int) jogo.jogadores[k].mao.size(); x++){
                    cout << nomeCartas[jogo.jogadores[k].mao[x].getNumeroCarta() - 1] << " de " << naipes[jogo.jogadores[k].mao[x].getNaipe() - 1] << "\n";
                }
                cout << jogo.jogadores[k].getPontosCartas() << "\nComprar uma carta? (y / n)";
                cin >> acao;
                if(acao == 'y'){
                    carta = Carta();
                    carta = jogo.deck.darCarta();
                    //jogo.deck.darCarta(carta);
                    jogo.jogadores[k].setMao(carta);
                }
                else{
                    jogo.jogadores[k].setAction(false);
                }
            }            
        }
        jogo.quemGanhouRodada(dealer);
        jogo.deck.shufle();
        for(int y = 0; y < n_jogadores; y++){
            jogo.jogadores[y].cleanMao();
        }
    }
    jogo.statusGeral();
    jogo.quemGanhou();

    //chamar as rodadas dentro do jogo
    //call controle de rodadas (while ready loop vendo todas as acoes dos jogadores)

    //verificar e-ou controlar cartas dadas, quem quer mais cartas

    //terminar a rodada e começar outra
    //chama vencedor, recomeca a rodada, limpa a mao dos jogadores

    //reiniciar jogo ou matar programa
    //mata
    /*
    cout << "Numero de jogadores: " << n_jogadores << endl;
    cout << "Numero de rodadas: " << n_rodadas << endl;
    for (auto i = menu.jogadores.begin(); i != menu.jogadores.end(); i++) {  
        cout << (*i).getName() << endl;
    }*/
    return 0;
}
