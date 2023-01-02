#include <iostream>
#include <cstdlib>

using namespace std;

float soma(float * num, float valorSoma){
    return *num += valorSoma;
}

void ptarray(float * vetor, int tam){
    for(int i = 0; i < tam; i++){ 
        vetor[i] = i;
    }
}

void mostarVetor(float * vetor, int tam){
    int j = 1;
    for(int i = 0; i < tam; i++){
        cout << j++ << ": " << vetor[i] << endl;
    }
}

int main(int argc, char const *argv[]){

    float num = 0;
    float vetor[5];
    int tam = sizeof(vetor) / sizeof(float);
    soma(&num, 20);
    ptarray(vetor, tam);

    mostarVetor(vetor, tam);
    return 0;
}
