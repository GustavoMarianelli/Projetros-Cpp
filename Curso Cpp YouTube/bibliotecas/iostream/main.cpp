#include <iostream>
/*
Biblioteca básica - define o fluxo de entrada e saída padrão de dados 
cin, cout e cer
*/

using namespace std;

int main(int argc, const char** argv) {

    char nome[80];
    fflush(stdin);
    cin.get(nome,80);
    cout << "Nome: " << nome << endl;
    return 0;
}