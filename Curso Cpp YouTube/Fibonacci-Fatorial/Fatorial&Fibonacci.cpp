#include <iostream>

using namespace std;


int fatorial(int n){
    if(n<=1)
        return 1;
    return n * fatorial(n-1);
}

void fibonacci(int n, int j, int i, int k = 0){
    if(j == 0)
        cout << 1 << " ";
    
    cout << i + j << " ";
    if(i < n){
        k = i;
        fibonacci(n, j = k, i+= j);
    }
    cout << endl;
}

int main(int argc, char const *argv[]){
    cout << fatorial(4) << endl;
    fibonacci(6, 0, 1);
    return 0;
}
