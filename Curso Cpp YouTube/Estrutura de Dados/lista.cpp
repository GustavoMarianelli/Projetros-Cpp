#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[]){
    
    list <int> aula, teste;
    list <int>::iterator it;
    
    teste.push_front(100);
    teste.push_front(99);
    teste.push_front(98);
    teste.push_front(97);
    
    int tam = 10;

    for(int i=0; i < tam; i++){
        aula.push_front(i);
    }
    
    aula.merge(teste);
    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);
    aula.sort();
    aula.reverse();
    aula.erase(--it);
   
    tam = aula.size();

    for(int i = 0; i < tam; i++){
        cout << "Elemento " << i << ": " << aula.front() << "\n"; 
        aula.pop_front();
    }

    return 0;
}
