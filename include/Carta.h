#ifndef CARTA_H
#define CARTA_H

#include <iostream>
using namespace std;

class Carta{

private:
    int naipe;
    int numeroCarta;
    int valor;
    //true esta no baralho
    //false esta na mao do jogador
    bool flag;

public:
    Carta(int naipeIn, int numeroCartaIn, int valirIn, bool flag);
    Carta();
    ~Carta();

    int getNaipe();
    void setNaipe(int x);
    int getNumeroCarta();
    void getNumeroCarta(int x);
    int getValor();
    void setValor(int x);
    bool getFlag();
    void setFlag(bool x);
};

#endif // !CARTA_H
