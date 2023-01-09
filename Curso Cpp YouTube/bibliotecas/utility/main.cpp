#include <iostream>
#include <utility>

using namespace std;

int main(int argc, const char** argv) {

    //função swap - troca 2 elementos
    auto a{2}, b{3};
    swap(a, b);
    cout << a << " - " << b << endl;

    //função make_pair
    pair<int, double>par;
    par = make_pair(2,3.9);

    cout << par.first << " - " << par.second << endl; 

    return 0;
}