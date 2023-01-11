#include <iostream>
#include <list>

using namespace std;

int main(int argc, const char** argv) {

    list<int>lista1;
    list<int>lista2(10,0);
    list<int>lista3(lista2);
    list<int>lista4{1,2,3,4,5};

    for(auto i:lista2)
        cout << i << " ";
    cout << endl;

    cout << "Tamanho: " << lista4.size() << endl;
    cout << "Capacidade Máxima: " << lista4.max_size() << endl;
    cout << "Primeiro elemento: " << lista4.front() << endl;
    cout << "Último elemento: " << lista4.back() << endl;

    (lista4.empty())? cout << "está vazia\n" : cout << "não está vazia\n"; 

    lista1.assign(10,0);
    lista1.push_back(9);
    lista1.push_front(1);
    lista1.pop_back();
    lista1.pop_front();
   
    
    while(!lista1.empty())
        lista1.pop_back();

    list<int>::iterator it = lista1.begin();
    
    lista1.insert(it,2);
    
    lista4.swap(lista3);
    
    cout << lista4.size() << endl;
    cout << lista3.size() << " - ";
    for(auto i:lista4)
        cout << i << " ";
    cout << endl;

    lista1.emplace(lista1.begin(), 9);
    
    return 0;
}