#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[]){
    
    stack <string> cartas;

    cartas.empty() ? cout << "Pilha vazia\n" : cout << "Pilha não está vazia\n";
    
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de paus");

    cartas.pop();

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    cout << cartas.top() << endl;

    cartas.empty() ? cout << "Pilha vazia\n" : cout << "Pilha não está vazia\n";

    return 0;
}
