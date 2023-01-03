#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]){
    
    //ofstream - saída
    //ifstream - entrada
    //ftstream - entrada e saída

   
   /* ofstream arquivoSaida; //só inserir no documento

    arquivoSaida.open("arquivo-teste.txt", ios::app);
    arquivoSaida << "Gustavo\n";
    arquivoSaida.close();*/

    /*
    ifstream arquivoEntrada; // só ler do arquivo
    string linha;
    arquivoEntrada.open("arquivo-teste.txt");
    if(arquivoEntrada.is_open()){
        while(getline(arquivoEntrada, linha)){
            cout << linha << endl;
        }
        arquivoEntrada.close();
    }
    else
        cout << "O arquivo não pôde ser aberto.\n";
    */

    fstream arquivoES; //entrada e saída
    char opc = 's';
    string nome;

    arquivoES.open("entrada-saida.txt", ios::out | ios::app);

    system("clear");
    while(opc == 's'){  
        cout << "Digite um nome: ";
        cin >> nome;
        arquivoES << nome << "\n";
        cout << "Digitar outro nome? ";
        cin >> opc;
    }

    arquivoES.close();

    system("clear");
    arquivoES.open("entrada-saida.txt", ios::in);
    cout << "Nomes digitados:\n";

    string linha;
    if(arquivoES.is_open()){
        while(getline(arquivoES, linha)){
            cout << linha << endl;
        }
    }
   

    return 0;
}
