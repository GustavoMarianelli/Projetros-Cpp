#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char** argv) {

    vector<int>vetor{1,2,3,4,5,6,7,8,9,0};

    for(auto it = vetor.begin(); it != vetor.end(); it++)
        cout << *it << endl;

    cout << endl;

    for(auto it = vetor.rbegin(); it != vetor.rend(); it++)
        cout << *it << endl;

    cout << vetor.size() << " - " << vetor.max_size() << endl;
    vetor.resize(8);
    cout << vetor.size() << endl;
    cout << vetor.capacity() << endl;

    //vetor.clear();
    (vetor.empty()) ? cout << "vazio\n" : cout << "não está vazio\n";
    vetor.shrink_to_fit();
    cout << vetor.capacity() << endl;

    cout << vetor.at(3) << endl;
    cout << vetor.front() << endl;
    cout << vetor.back() << endl;
    
    vector<int>vetor2;
    vetor2.assign(vetor.begin(), vetor.end());

    vetor2.push_back(9);
    vetor2.pop_back();

    vector<int>::iterator it;
    it = vetor2.begin();

    vetor2.insert(it, 0);

    for(auto it:vetor2){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}