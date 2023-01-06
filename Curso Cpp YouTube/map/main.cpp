#include <iostream>
#include <map>

using namespace std;

int main(int argc, const char** argv) {

    map <int, string> produtos;
    map <int, string>::iterator itmap;

    produtos.insert(pair<int,string>(0, "Mouse"));
    produtos.insert(pair<int,string>(1, "Teclado"));
    produtos.insert(pair<int,string>(2, "Monitor"));
    
    produtos.erase(produtos.begin(), produtos.find(2)); //apaga de acordo com a chave (no caso, chave 2). NÃO É ÍNDICE!!
    //produtos.clear(); //apaga todos
    
    itmap = produtos.find(0); //procura pela chave 30
    
    if(itmap == produtos.end()) cout << "Produto não encontrado!\n";
    
    else{
        cout << "Produto encontrado!\n";
        cout << "Código: " << itmap->first << " - Produto: " << itmap->second << endl;
    }

    for(auto i:produtos){
        cout << i.first << " - " << i.second << endl;
    }
    

    return 0;
}