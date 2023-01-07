#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]){
    int num;
    float pi = M_PI;

   cout.precision(3);

   cout << "Valor de PI: " << pi << endl;

    cout.precision(-1);
   cout << "Valor de PI: " << std::scientific << pi << endl;
 
    
    cout << "Informe um número inteiro:" << endl;
    scanf("%d", &num);
    printf("\n%d\n", num);

    cout << "Valor de num em hex: " << hex << num << endl;

    cout << "Valor de num em oct: " << setbase(8) << num << endl;

    return 0;
}
