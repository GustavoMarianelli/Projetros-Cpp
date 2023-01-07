#include <iostream>

using namespace std;

class Veiculo{
    public:
        void setNome(const char* nome){
            this->nome = nome;
        }

        const char* getNome(){
            return this->nome;
        }

        void setCor(const char* cor){
            this->cor = cor;
        }

        const char* getCor(){
            return this->cor;
        }

        int getVelMax(){
            return this->velMax;
        }

        int getRodas(){
            return this->rodas;
        }

        virtual void mostrarDados(){
            cout << "Nome.............: " << this->getNome() << endl;
            cout << "Cor..............: " << this->getCor() << endl;
            cout << "Rodas............: " << this->getRodas() << endl;
            cout << "Velocidade Máxima: " << this->getVelMax() << endl << endl;
        }

    private:
        const char* nome;
        const char* cor;
        int velMax;
        int rodas;

    protected:
        void setRodas(int rodas){
            this->rodas = rodas;
        }

        void setVelMax(int velMax){
            this->velMax = velMax;
        }
};

class Carro:public Veiculo{
    public:
        Carro(){
            this->setNome("Carro");
            this->setCor("Branco");
            this->setVelMax(120);
            this->setRodas(4);
        }
};

class Moto:public Veiculo{
    public:
        Moto(){
            this->setNome("Moto");
            this->setCor("Preto");
            this->setVelMax(160);
            this->setRodas(2);
        }
};

class Militar:public Veiculo{
    public:
        Militar(bool armamento, int qtMunicao):armamento(armamento), qtMunicao(qtMunicao){
            this->setNome("Tanque");
            this->setCor("Verde");
            this->setVelMax(150);
            this->setRodas(6);

            if(armamento)
                this->qtMunicao = qtMunicao;
            else
                this->qtMunicao = 0;
        }

        int getQtMunicao(){
            return this->qtMunicao;
        }

        bool isArmamento(){
            return this->armamento;
        }
        void mostrarDados() override{
            cout << "Nome.............: " << this->getNome() << endl;
            cout << "Cor..............: " << this->getCor() << endl;
            cout << "Rodas............: " << this->getRodas() << endl;
            cout << "Velocidade Máxima: " << this->getVelMax() << endl;
            cout << "Munição..........: " << this->getQtMunicao() << endl;
            cout << "Armamento........: " << this->isArmamento() << "\n\n";   
        }
        
    private:
        int qtMunicao;
        bool armamento;

};

int main(int argc, const char** argv) {

    Carro c1;
    c1.mostrarDados();
    
    Moto m1;
    m1.mostrarDados();

    Militar t1{false, 0};
    t1.mostrarDados();

    return 0;
}