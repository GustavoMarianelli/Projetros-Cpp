#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    string veiculo = "Carro";
    string *pv; 

    pv = &veiculo; // ponteiro recebe o endereço da variável veiculo;

    *pv = "Bicicleta"; // no endereço apontado por pv adiciona o valor bicicleta

    cout << veiculo << endl << *pv << endl;
    return 0;
}
