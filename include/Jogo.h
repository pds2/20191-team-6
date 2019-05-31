#ifndef JOGO_H
#define JOGO_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Dealer.h"
#include "Carta.h"

class Jogo {

private:
    static vector<Jogador> jogadores;
    static vector<Carta> baralho;
    static Dealer dealer;
    static int numJogadores;
    static string reader;
    static string option;

public:
    Jogo(/* args */);
    ~Jogo();
    
    void jogo();
    static string decidir();
    void novoBaralho();
    void imprimeSaldos();
    bool verificaMaos();
    bool verificaSaldos();
    void pagaPremios();
    void comecaRodada();
    void terminaRodada();
    void novaRodada();
    static void distribuiCartas();

};

Jogo::Jogo(/* args */)
{
}

Jogo::~Jogo()
{
}


#endif // !JOGO_H