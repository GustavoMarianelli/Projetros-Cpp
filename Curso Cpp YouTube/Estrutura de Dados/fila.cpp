#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[]){
    
    queue <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;

    cout << "Primeira carta: " << cartas.front() << endl;
    cout << "Última carta: " << cartas.back() << endl;
    
    while (!cartas.empty()){
        cout << "Primeira carta: " << cartas.front() << endl;
        cartas.pop();
        cartas.empty() ? cout << "A fila etsá vazia!\n" : cout << "A fila ainda não está vazia!\n";
    }

    /*
    size
    front
    back
    empty
    push
    pop
    */
    return 0;
}

