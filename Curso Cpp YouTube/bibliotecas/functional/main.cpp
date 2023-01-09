#include <iostream>
#include <functional>

using namespace std;

int soma(int a, int b){
    return a+b;
}

struct CFB{
    int num;
    int dobro(){
        return num*2;
    }
};

class G{
    public:
        G(int n):num(n){};
        int num;
        int dobro(){
            return num*2;
        }
};

int main(int argc, const char** argv) {

    //função BIND - liga uma função a uma variável

    auto retorno = bind(soma, 10, 5);

    cout<< retorno() << endl;

    //função CREF (ou ref) - cria uma referência entre dois elementos

    int n1{10};
    auto n2 = cref(n1);
    cout << n2 << endl;
    n1 = 50;
    cout << n2 << endl;
    cout << &n1 << " - " << &n2 << endl;

    //função mem_fn - atribui uma função de uma struct ou classe a uma variável
    CFB cfb{10};
    auto dobro = mem_fn(&CFB::dobro);
    cout << dobro(cfb) << endl;


    G g{3};
    auto dobro2 = mem_fn(&G::dobro);
    cout << dobro2(g) << endl;
    return 0;
}

