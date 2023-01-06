#include <iostream>
#include <vector> 

using namespace std;

int main(int argc, const char** argv) {
    
    int vetor[]{0,1,2,3,4,5,6,7,8,9};

    vector<int>vetint{10,9,8,7,6,5,4,3,2,1};

    for(int i = 0; i < sizeof(vetor) / 4; i++){
        cout << vetor[i] << endl;
    }


    cout << "for com base em intervaelo - for range declaration\n";
    for(int i:vetor){ //
        cout << i << endl;
    }
    
    cout << "vetint\n";

    for(auto i:vetint){ //
        cout << i << endl;
    }

    const char*nome = "Gustavo"; //for range não funciona quando não é uma coleção

    for(int i=0; i<=sizeof(nome);i++){
        cout << nome[i];
    }
    cout << endl;
    return 0;
}