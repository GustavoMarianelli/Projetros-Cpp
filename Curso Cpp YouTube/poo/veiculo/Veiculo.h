#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

#include <iostream>
#include <stdio.h>


using namespace std;

class Veiculo {
    public:
        Veiculo(int tp);
        void imprimir();
        int getVelAtual();
        void setVelAtual(int velAtual);
        int getVelMax();
        string getNome();
        void setNome(string nome);
        bool isLigado();
        void setLigado(bool ligado);
        
        
    private:
        int velAtual = 0;
        int velMax;
        string nome;
        bool ligado;
        
    protected:

};

Veiculo::Veiculo(int tp){
    ligado = true;
    velAtual = 0;
    switch(tp){
        case 1:
            nome = "Carro";
            velMax = 220;
            break;
        case 2:
            nome = "Moto";
            velMax = 180;
            break;
        case 3:
            nome = "Bicicleta";
            velMax = 60;
            break;
    }
}

string Veiculo::getNome(){
    return this->nome;
}

int Veiculo::getVelAtual(){
    return this->velAtual;
}

int Veiculo::getVelMax(){
    return this->velMax;
}

void Veiculo::setNome(string nome){
    this->nome = nome;
}

void Veiculo::setVelAtual(int velAtual){

    if(velAtual > 0 && velAtual <= this->getVelMax())
        this->velAtual = velAtual;
    else if(velAtual < 0)
        this->velAtual = 0;
    else
        this->velAtual = this->getVelMax();
}

bool Veiculo::isLigado(){
    return this->ligado;
}

void Veiculo::setLigado(bool ligado){
    this->ligado = ligado;
}

void Veiculo::imprimir(){
   
    cout << "Tipo.............: " << nome << endl;
    cout << "Velocidade Atual.: " << endl;
    cout << "Velocidade Máxima: " << velMax << endl;
}


#endif