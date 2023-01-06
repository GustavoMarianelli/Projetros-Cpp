#include <iostream>
#include <vector>
#include "extern.cpp"
#include "header.h"

using namespace std;

int soma(int n1, int n2){
    return n1+n2;
}

string retornarNome(){
    return "Gustavo";
}

auto somaDouble(double n1, double n2) -> double{
    return n1 + n2;
}

void somaEstatica(){
    static int i = 0; //armazena a variável em uma posição da memória e usa sempre o mesmo endereço
    i++;
    cout << i << endl;
}

void mostrarNum();
int num{40}; 
extern int valor;

int main(int argc, const char** argv) {

    auto num{10}; // declara a variável sem o tipo primitivo mas define ele quando inicializa;
    auto nome{"Gustavo"};
    auto valor{12.4};

    auto res = soma(2,4);
    auto n = retornarNome();

    cout << n << endl;

    cout << somaDouble(10.3, 4.5) << endl;

    vector<int>valores{1,2,3,4,5,6,7,8,9};

    for(auto it = valores.begin(); it!=valores.end(); it++){
        cout << *it << " - ";
    }

    cout << endl;

    register int cont; //preferência a varíaveis que precisam de um acesso rápido ou são utilizadas muitas vezes. É APENAS UM PEDIDO, NÃO SIGNIFICA QUE SERÁ ARMAZENADO

    for(cont = 0; cont < 10; cont ++)
        cout << cont << endl;

    cout << endl;
    somaEstatica();
    somaEstatica();
    somaEstatica();
    
    system("clear");
    mostrarNum();
    cout << num << endl;
    cout << tmp << endl;

    return 0;
}