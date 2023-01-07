#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char** argv) {
    vector<int>vetor{0,1,2,3,4,5,6,7,8,9};

    for(auto it:vetor){
        cout << it << endl;
    }

    cout << "for each\n";
    for_each(vetor.begin(), vetor.end(), [](int num){
        cout << num << endl;
    });

    return 0;
}