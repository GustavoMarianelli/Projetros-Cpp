#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    int *p;

    int vetor[10];

    p = vetor;
    *p = 10;
    cout << vetor[0] << endl << p << endl;

    *(++p) = 20;
    cout << vetor[1] << endl << p << endl;

    *(++p) = 30;
    cout << vetor[2] << endl << p << endl;


    return 0;
}
