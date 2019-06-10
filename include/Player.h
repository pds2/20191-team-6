#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Carta.h"

public class Player{
    private string name;
    private int pontosCartas;
    private vector<Carta> mao;
    private int pontoTotal;

    public Player(sring nome);
    public ~Player();

    public getName();
    public setName(string nome);
    public getPontosCartas();
    public setPontosCartas(int x);
    public getMao();
    public setMao(Carta carta);
    public cleanMao();
    public getPontoTotal();
    public setPontoTotal(int x);
    
};


