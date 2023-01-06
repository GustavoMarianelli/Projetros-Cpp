#include <iostream>
#include <stdio.h>
#include <utility>
#include <vector>
using namespace std;


//container pair - armazena dados em pares - permite combinações de tipos primitivos e classes
int main(int argc, const char** argv) {

    const int tam = 3;
    pair <int, string> par (10, "Gustavo");
    pair <int, string> par2[tam];
    pair <int, pair<string, double>> par3[tam];


    for(int i = 0; i < tam; i++){
        int num;
        string nome;
        cout << "Número inteiro: ";
        cin >> num;
        cout << "Nome: ";
        cin >> nome;
        par2[i] = make_pair(num, nome);
    }

    for(int i = 0; i < tam; i++){
        int codigo;
        string produto;
        double preco;
        
        cout << "Código: ";
        cin >> codigo;
        cout << "Produto: ";
        cin >> produto;
        cout << "Preço: ";
        cin >> preco;

        par3[i] = make_pair(codigo, make_pair(produto, preco));
    }
    
    for(int i = 0; i< tam; i++){
        cout << par3[i].first << " - " << par3[i].second.first << " - " << par3[i].second.second << endl;
    }
    
    vector<pair <int,string> >produtos;

    produtos.push_back(make_pair(1, "Teclado"));
    produtos.push_back(make_pair(2, "Tela"));
    produtos.push_back(make_pair(3, "Carregador"));    

    for(auto i:produtos){
        cout << i.first << " - " << i.second << endl;
    }
    
    return 0;
}