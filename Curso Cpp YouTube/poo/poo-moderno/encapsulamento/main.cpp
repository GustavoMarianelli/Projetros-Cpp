#include <iostream>

using namespace std;

class Carro{
    public:

        Carro(const char* nome, int potencia){
            this->nome = nome;
            this->potencia = potencia;
            setVelMax(potencia);
        }

        int getVelMax(){
            return this->velMax;
        }

        const char*  getNome(){
            return this->nome;
        }

        void setNome(const char* nome){
            this->nome = nome;
        }

        int getPotencia(){
            return this->potencia;
        }

        void setPotencia(int potencia){
            this->potencia = potencia;
            setVelMax(potencia);
        }

    private:
        int velMax;
        const char* nome;
        int potencia;
        void setVelMax(int potencia){
            if(potencia < 100)
                this->velMax = 120;
            else if (potencia < 200)
                this->velMax = 220;
            else
                this->velMax = 320;
        }
    protected:


};

int main(int argc, const char** argv) {
    Carro c1{"Ferrari", 300};

    cout << c1.getNome() << " - " << c1.getPotencia() << " - " << c1.getVelMax() << endl; 

    c1.setPotencia(100);
    cout << c1.getNome() << " - " << c1.getPotencia() << " - " << c1.getVelMax() << endl; 

    return 0;
}