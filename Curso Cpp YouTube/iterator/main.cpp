#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char** argv) {
    
    vector <string> produtos = {"mouse", "teclado", "monitor", "gabinete", "caixa de som"};
    vector <string>::iterator it;


    //advance, next, prev

    
    for(it = produtos.begin(); it!=produtos.end();it++){
        cout << *it << endl;

    }

    //pode declarar o iterator no corpo do for 
        //for(vector <string>::iterator it = produtos.begin(); it != produtos.end(); it++)

    return 0;
}