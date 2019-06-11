#include <iostream>
using namespace std


public class Carta{
    private int naipe;
    private int numeroCarta;
    private int valor;
    //true esta no baralho
    //false esta na mao do jogador    
    private bool flag;    

    public Carta(int naipeIn, int numeroCartaIn, int valirIn, bool flag);
    public Carta();
    

    public int getNaipe();
    public void setNaipe(int x);

    public int getNumeroCarta();
    public void getNumeroCarta(int x);
    
    public int getValor();
    public void setValor(int x);

    public bool getFlag();
    public void setFlag(bool x);
};

