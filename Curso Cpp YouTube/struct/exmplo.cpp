#include <iostream>
#include <string.h>
using namespace std;


typedef struct carro{
    string nome, cor;
    int pot, velMax, vel = 0;

    void inserirValores (string stnome, string stcor, int stpot, int stVelMax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stVelMax;
    }

    void mostrarDados(){
        cout << "Nome.............: " << nome << endl;
        cout << "Cor..............: " << cor << endl;
        cout << "Potência.........: " << pot << endl;
        cout << "Velocidade Atual.: " << vel << endl;
        cout << "Velocidade Máxima: " << velMax << endl;
    }

    void mudarVel(int velocidade){
        vel = velocidade;
        if(velocidade < velMax){
            if(velocidade < 0)
                vel = 0;
            else
                vel = velocidade;
        }
        else
            vel = velMax;
    }

}Carro;

int main(int argc, char const *argv[]){
  
    Carro *carros = new Carro[5]; //declarar array do tipo struct tem q usar ponteiro
    Carro c1, c2, c3, c4, c5;

    carros[0] = c1;
    carros[1] = c2;
    carros[2] = c3;
    carros[3] = c4;
    carros[4] = c5;
    
    carros[0].inserirValores("Ferrari", "Vemelho", 180, 300);
    carros[1].inserirValores("Gallardo", "Prata", 200, 350);
    carros[2].inserirValores("Mustang", "Preto", 100, 200);
    carros[3].inserirValores("Tesla", "Branco", 80, 180);
    carros[4].inserirValores("BMW", "Azul", 200, 350);
    
    
    for(int i = 0; i < 5;i++){
        carros[i].mostrarDados();
        cout << endl;
    }
  

    

    return 0;


}
