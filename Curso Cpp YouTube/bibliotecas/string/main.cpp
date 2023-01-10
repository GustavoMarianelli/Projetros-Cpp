#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char** argv) {

    string txt("Gustavo Pereira Marianelli"); //objeto txt da classe string 
    string::iterator it = txt.begin();
    cout << *it << endl;

    cout << txt.size() << endl;
    cout << txt.length() << endl;

    txt.resize(20); // redefine o tamanho
    cout << txt.size() << endl;
    
    cout << txt.max_size() << endl; //retorna o tamanho máximo

    cout << txt.capacity() << endl; //retorna a capacidade

    //txt.clear(); // limpa a string
    cout << txt << endl;
    if(txt.empty())
        cout << "Vazia\n";
    
    txt.shrink_to_fit(); //reduz para a capacidade que a string ocupa; (mínimo 15)
    cout << txt.capacity() << endl;

    int tam = txt.size();
    for(int i = 0; i < tam; i++){
        cout << txt.at(i);
    }
    cout << endl;

    txt.back() = 'I';
    cout << txt.back() << endl;

    txt.front() = 'g';
    cout << txt.front() << endl;

    txt+="anelli";
    txt.append(".");
    txt.push_back('-');
    txt.pop_back();
    txt.assign("Gustavo");
    txt.insert(7, ".");
    txt.erase(7,1);
    txt.replace(0,1,"GGGG");

    string txt2{"Aula"};
    txt2.resize(txt.length());
    txt.swap(txt2);
    cout << txt << endl;

    size_t encontrado = txt.find("a"); 
    cout << encontrado << endl;
    
    if(encontrado!=string::npos)
        cout << "encontrado\n";
    else
        cout << "não foi encontrado\n";
    
    string txt3;
    txt3 = txt.substr(1,2);
    cout << txt3 << endl;

    if(txt.compare(txt3) == 0)
        cout << "iguais\n";
    else 
        cout << "diferentes\n";

    string texto("200"), txt4;
    int valor{500};

    cout << valor - stoi(texto) << endl;

    txt4 =  to_string(valor);
    cout << txt4 << endl;
    return 0;
}