#include <iostream>
#include <cstdlib>
#include <ctime> //utilizando no rand

using namespace std;

// void fim(){
//     cout << "FIM\n";
// }

// int comparar(const void* a, const void*b){
//     return (*(int*)a - *(int*)b);
//     // 0 - iguais
//     // > 0 - a > b
//     // < 0 - a < b
// }

int main(int argc, const char** argv) {
    
    // double num;
    // char numero[80];

    // cin >> numero;

    // num = atof(numero); 

    // // atof atoi atol atoll 
    // // ftoa itoa ltoa lltoa

    // cout << num << endl << endl;

    // srand(time(NULL));
    // for(int i = 0; i< 5; i++){
    //     cout << rand()%10 << endl; 
    // }

    // int *vetor = (int*)calloc(10, sizeof(int));
    // int *vetor2 = (int*)malloc(sizeof(int));

    // srand(time(NULL));

    // for(int i=0; i<10; i++){
    //     vetor2[i] = rand()%100;
    // }

    // for(int i=0; i<10; i++){
    //     cout << vetor2[i] << endl;
    // }

    // free(vetor);
    // free(vetor2);


    // cout << "--------------------------" << endl;

    // const char* p;
    // p=getenv("PATH");//pega o valor de uma variável de ambiente

    // cout << p << endl;

    // //atexit(fim);
    // //at_quick_exit(fim);
    // for(int i=0; i< 10; i++){
    //     if(i<5)
    //         cout << i << endl;

    //         //_Exit(EXIT_SUCCESS);
    //         //quick_exit(EXIT_SUCCESS);//mesmo resultado do exit
    //         //exit(EXIT_SUCCESS); //retorna 0 - EXIT_FAILURE retorna 1
    //         //abort() é outra função de finalização
    // }

    // cout << "----------------------\n";

    // int vetor3[]={3,5,4,8,6,9,1};
    // int pesquisa = 7;
    // int *pos;

    // qsort(vetor3, 7, sizeof(int), comparar);

    // for(int i = 0; i < 7; i++){
    //     cout << vetor3[i] << endl;
    // }
    // cout <<"--------------------\n";

    // // pos =(int*) bsearch(&pesquisa, vetor3, 7, sizeof(int), comparar);
    // // cout << *pos << endl;

    // //abs - valor absoluto de um número

    int n = -10;
    cout << abs(n) << endl;

    int num = 10, den = 3;
    div_t res;

    res=div(num, den);
    cout << res << endl;


    return 0;
}