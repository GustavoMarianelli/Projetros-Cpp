#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

#include <iostream>
#include <stdio.h>


using namespace std;

class Aviao {
    public:
        int vel = 0;
        int velMax;
        string tipo;
        Aviao(int tp);
        void imprimir();
        
    private:

};

Aviao::Aviao(int tp){
    switch(tp){
        case 1:
            tipo = "Jato";
            velMax = 800;
            break;
        case 2:
            tipo = "Monomotor";
            velMax = 300;
            break;
        case 3:
            tipo = "Planador";
            velMax = 150;
            break;
    }
}

void Aviao::imprimir(){
   
    cout << "Tipo: " << tipo << endl;
    cout << "Velocidade Máxima: " << velMax << endl;
}


#endif