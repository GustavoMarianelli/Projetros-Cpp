#include <iostream>
#include <array>

using namespace std;

int main(int argc, const char** argv) {
    
    array<int,10> vetor{1,4,3,7,5,9,6,8,2,0};

    for(auto it = vetor.begin(); it != vetor.end(); it++){
        cout << *it << endl;
    }
    cout << endl;
    for(auto it = vetor.rbegin(); it != vetor.rend(); it++){
        cout << *it << endl;
    }

    cout << vetor.size() << " - " << vetor.max_size() << endl; 

    (vetor.empty()) ? cout << "vazio\n" : cout << "não está vazio\n";

    cout << vetor.at(4) << endl;

    cout << vetor.front() << " - " << vetor.back() << endl;

    array<int,10> vetor2;
    vetor2.fill(0);
    cout << endl;

    for(auto i:vetor2)
        cout << i << endl;
    
    vetor.swap(vetor2);

    for(auto i:vetor)
        cout << i << endl;
    cout << endl;
    
    for(auto i:vetor2)
        cout << i << endl;
    
    return 0;
}