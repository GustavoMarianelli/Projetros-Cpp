#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, const char** argv) {
    
    double num;
    char numero[80];

    cin >> numero;

    num = atof(numero); 

    // atof atoi atol atoll 
    // ftoa itoa ltoa lltoa

    cout << num << endl;

    srand(time(NULL));
    for(int i = 0; i< 5; i++){
        cout << rand()%10 << endl; 
    }

    int *vetor = (int*)calloc(10, sizeof(int));
    int * vetor2 = (int*)malloc(sizeof(int));

    srand(time(NULL));

    for(int i=0; i<10; i++){
        vetor2[i] = rand()%100;
    }

    for(int i=0; i<10; i++){
        cout << vetor2[i] << endl;
    }

    free(vetor);
    free(vetor2);


    
    cout << "--------------------------" << endl;

    const char* p;
    p=getenv("PATH");

    cout << p << endl;

    for(int i=0; i< 5; i++){
        if(i<5)
            cout << i << endl;

        else
            exit(EXIT_SUCCESS);
    }


    return 0;
}