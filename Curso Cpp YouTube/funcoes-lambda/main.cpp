#include <iostream>
#include <vector>

using namespace std;

// [] - captura de variáveis / (parâmetros)->tipo_retorno / {corpo da função};
//não precisam ser delcaradas externamente, podem ser usadas dentro do corpo;
//são anônimas e relacionadas à variáveis;


int main(int argc, const char** argv) {


    int n1 = 10;
    int n2 = 5; 
    int n3 = 2; 
    int n4 = 12;

    auto soma=[=]()->int{
        return n1+n2+n3+n4;
    };


    auto maior = [=] (vector<int>vet)->int{
        auto maior = 0;
        for(int i:vet)
            maior = (maior > i) ? maior:i; 
        
        return maior + n1;
    };

    cout << soma() << endl << maior({2,5,1,8,12,6}) << endl;


    return 0;
}