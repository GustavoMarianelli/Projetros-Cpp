#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]){
    char * nome = (char*) malloc(sizeof(char) * 20);

    fgets(nome, sizeof(char) * 20, stdin);

    cout << nome << endl;
    return 0;
}
