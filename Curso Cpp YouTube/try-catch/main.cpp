#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double dividir(double n1, double n2){
    if(n2 == 0)
        throw "Erro de divisão por ZERO";
    if(n1>=10)
        throw "Erro. n1 precisa ser menor que 10";
    return n1/n2;
}

int main(int argc, const char** argv) {

 /*   
    vector<int>num(5);
    try{
        num.at(6) = 10;
        cout << num[6] << endl;
    }catch(exception& e){
        cout << "Erro!" << e.what() << endl;
    }
*/

    double n1, n2;

    cin >> n1 >> n2;

    try{
        cout << dividir(n1, n2);
    }catch(const char* e){
        cout << e << endl;
    }
 
    return 0;
}