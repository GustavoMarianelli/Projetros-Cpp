#include <iostream>
#include <memory>

using namespace std;


class Carro{
    public:
        int vel = 10;
        int getVel(){
            return vel;
        }
        void setVel(int v){
            this->vel = v;
        }
};

int main(int argc, const char** argv) {

    //int *pnum = new int();

    unique_ptr<int>pnum(new int());
    *pnum = 10; 

    shared_ptr<int>pnum2(new int());
    shared_ptr<int>pnum3 = pnum2;
    *pnum2 = 15;
    

    cout << *pnum << " - " << &pnum << endl;
    cout << *pnum2 << " - " << &pnum2 << endl;
    cout << *pnum3 << " - " << &pnum3 << endl;
    
    
    string * str = new string("Gustavo Marianelli");
    unique_ptr<string> str2(new string("Gustavo Pereira Marianelli"));


    cout << *str << " - tam: " << str->size() << endl;
    cout << *str2 << " - tam: " << str2->size() << endl;


    Carro * c1 = new Carro();
    unique_ptr<Carro>c2 (new Carro());

    cout << c1->getVel() << endl;
    cout << c2->getVel() << endl;
    
    delete c1;    
    
    return 0;
}