#include <iostream>
#include <memory>
using namespace std;


class Carro{
    public:
        int velMax;
        int potencia;
        const char* nome;
        Carro(const char* nome, int potencia):nome(nome), potencia(potencia){
            if(potencia < 100)
                this->velMax = 120;
            else if (potencia < 200)
                this->velMax = 220;
            else
                this->velMax = 350;
        }
};

int main(int argc, const char** argv) {
    unique_ptr<Carro> c1(new Carro{"Ferrari", 300});
    cout << c1->nome << " - " << c1->potencia << " - " << c1->velMax << endl;
    
    Carro c2{"Mercedes", 250};
    cout << c2.nome << " - " << c2.potencia << " - " << c2.velMax << endl;
    
    return 0;
}