#include <iostream>
#include <vector>
#include <map>
using namespace  std;

typedef struct pessoa{
    string nome;
    int idade;
}Pessoa;

class Veiculo{
    public:
        int tipo;
        string nome;
};

int main(int argc, const char** argv) {
    Pessoa p1{"Gustavo", 22};
    Pessoa p2{"Manuel", 30};


    int num{10};
    int vetor[]{1,2,3,4,5,6,7,8,9};
    string nome{"Gustavo"};
    vector<int>valores{1,2,3,4,5};
    map<string,string>capitais{{"MG", "Belo Horizonte"}};

    Veiculo v1{1, "Carango"};


    cout << nome << endl;

    for (vector<int>::iterator it = valores.begin(); it!=valores.end();it++){
        cout << *it << endl;
    }

    for (map<string, string>::iterator it = capitais.begin(); it!=capitais.end();it++){
        cout << it->first << " - " << it->second << endl;
    }

    cout << p1.nome << " - " << p1.idade << endl;

    cout << v1.tipo << " - " << v1.nome << endl;

    cout << vetor[3] << endl;
    return 0;
}