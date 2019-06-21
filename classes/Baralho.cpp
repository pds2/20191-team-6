#include "Baralho.h"

Baralho::Baralho(){
    int x = 0;
    int valorAux;
    Carta cartaAux;
    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 14; j++){
            valorAux = j;
            if (valorAux > 10) valorAux = 10;
            cartaAux = Carta(i, j, valorAux, true);
            baralho.push_back(cartaAux);
            if(x > 0){
                cout << "\ncarta aux naipe: " << cartaAux.getNaipe() << "\n";
                cout << "baralho carta naipe: " << baralho[x-1].getNaipe() << "\n";
                cout << "carta aux numero: " << cartaAux.getNumeroCarta() << "\n";
                cout << "baralho carta numero: " << baralho[x-1].getNumeroCarta() << "\n";            
                cout << "carta aux numero: " << cartaAux.getValor() << "\n";
                cout << "baralho carta numero: " << baralho[x-1].getValor() << "\n";
            }
            x++;
        }
    }
}

Baralho::~Baralho(){
    for(int i = 0; i < 52; i++){
        baralho.pop_back();  
    }
}

Carta Baralho::darCarta(){
    Carta carta;
    while(true){    
        int random = rand() % 52;
        if(baralho[random].getFlag()){
            /*carta.setNaipe(baralho[random].getNaipe());
            carta.setNumeroCarta(baralho[random].getNumeroCarta());
            carta.setValor(baralho[random].getValor());*/
            cout << "\ncarta rand naipe: " << baralho[random].getNaipe() << "\n";
            cout << "\ncarta rand numero: " << baralho[random].getNumeroCarta() << "\n";
            cout << "\ncarta rand valor: " << baralho[random].getValor() << "\n";
            baralho[random].setFlag(false);
            carta = Carta(baralho[random].getNaipe(), baralho[random].getNumeroCarta(), baralho[random].getValor(), false);
            break;
        }
    }
    return carta;
}

void Baralho::shufle(){
    for(int i = 0; i < 52; i++){
        baralho[i].setFlag(true);
    }
}

