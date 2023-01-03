#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>
using namespace std;

class Base1{
    public:
        void impBase1();
};

void Base1::impBase1(){
   cout << "Imprimindo classe Base1\n";
}


class Base2{
    public:
        void impBase2();
};

void Base2::impBase2(){
    cout << "Imprimindo classe Base2\n";
}


class CFB:public Base1, public Base2{

};


#endif