#include <iostream>
#include "Aviao.h"
#include <locale.h>

using namespace std;


int main(int argc, char const *argv[]) {
    setlocale(LC_ALL,"Portuguese");
    
    Aviao * av1 = new Aviao(2);


    cout << av1->velMax << endl;
    
    return 0;
}
