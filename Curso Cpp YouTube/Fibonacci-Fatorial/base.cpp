#include <iostream>>

using namespace std;

void texto();

void soma(int n1, int n2);

void soma(double n1, double n2);

void mostrarNaTela(string txt = "Gustavo"){
    cout << endl << txt << endl;
}

void contador(int num, int i = 0){
    
    if(i < num){
        cout << i << " ";
        contador(num, ++i);
    }
    cout << endl;
}

int main(int argc, char const *argv[]){
    // texto();
    // soma(2,3);
    // soma(1.0, 2.5);
    // mostrarNaTela();
    contador(5);

    return 0;
}

void texto(){
    cout << "Texto\n";
}

void soma(int n1, int n2){
    cout << n1 + n2 << endl;
}

void soma(double n1, double n2){
    cout << n1 + n2 << endl;
}
