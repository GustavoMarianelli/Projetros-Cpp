#include <iostream>>

using namespace std;

int main(int argc, char const *argv[]){
    enum armas {fuzil = 150, faca = 2, pistola = 6, escopeta = 12};

    armas armaSelecionada;

    armaSelecionada = fuzil;

    cout << armaSelecionada << endl;

    return 0;
}

