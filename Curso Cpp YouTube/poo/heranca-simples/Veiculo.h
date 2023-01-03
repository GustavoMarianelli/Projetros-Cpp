#ifndef VEICULO_H_INCLUDED
#define VEICULO_H

class Veiculo{
    public:

        int getVelocidade();
        void setVelocidade(int velocidade);
        
        int getBlindagem();
        void setBlindagem(int blindagem);

        int getRodas();
        void setRodas(int rodas);

        int getTipo();
        void setTipo(int tipo);

        int getVelMax();
       
        bool isArmamento();
        void setArmamento(bool armamento);

    private:

        int velocidade, blindagem, rodas, tipo, velMax;
        bool armamaneto;

    protected: 
        
        void setVelMax(int velMax);

};

bool Veiculo::isArmamento(){
    return this->armamaneto;
}

void Veiculo::setArmamento(bool armamento){
    this->armamaneto = armamaneto;
}

int Veiculo::getVelocidade(){
    return this->armamaneto;
}

void Veiculo::setVelocidade(int velocidade){
    this->velocidade = velocidade;
}

int Veiculo::getBlindagem(){
    return this->blindagem;
}

void Veiculo::setBlindagem(int blindagem){
    this->blindagem = blindagem;
}

int Veiculo::getRodas(){
    return this->rodas;
}

void Veiculo::setRodas(int rodas){
    this->rodas = rodas;
}

int Veiculo::getTipo(){
    return this->tipo;
}

void Veiculo::setTipo(int tipo){
    this->rodas = tipo;
}

int Veiculo::getVelMax(){
    return this->velMax;
}

void Veiculo::setVelMax(int velMax){
    this->velMax = velMax;
}

class Moto:public Veiculo{
    public:
        Moto();
};

Moto::Moto(){
    this->setVelMax(220);
    this->setTipo(2);
    this->setVelocidade(0);
    this->setBlindagem(10);
    this->setRodas(2);
}


#endif