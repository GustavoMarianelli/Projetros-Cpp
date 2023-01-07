#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
int main(int argc, const char** argv) {

    map<char,int>mapa;
    mapa['a'] = 10;
    mapa['b'] = 20;
    mapa['c'] = 30;
    auto it = mapa.find('c');

    if(it!=mapa.end())
        cout << "encontrou!\n";

    vector<int>vec{5,4,3,2,1};
    auto at = find(vec.begin(), vec.end(), 2);

    if(at!=vec.end())
        cout << "encontrado!\n";
    else
        cout << "não encontrado!\n";


    return 0;
}