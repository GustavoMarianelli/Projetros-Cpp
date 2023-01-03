#include <iostream>
#include "Veiculo.h"
#include <locale.h>

using namespace std;


int main(int argc, char const *argv[]) {
    setlocale(LC_ALL,"Portuguese");
    
    Veiculo * v1 = new Veiculo(2);
    Veiculo * v2 = new Veiculo(3);
    Veiculo * v3 = new Veiculo(1);
    
    v2->getNome();
    v3->getNome();

    v1->setNome("Caminhão");

    v1->imprimir();
    v2->imprimir();
    v3->imprimir();
    
    return 0;
}
