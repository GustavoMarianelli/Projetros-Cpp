#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    
    vector<int> num1;
    vector<int> num2;

    int tam, i;

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);
    

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    tam = num1.size();

    cout << "Primeiro valor de num1: " << num1.front() << endl;
    cout << "Último valor de num1: " << num1.back() << endl;
    cout << "Valor do meio de num1: " << num1.at(num1.size()/2) << endl;

    num1.insert(num1.begin(), 98);
    num1.insert(num1.end(), 9098);

    num1.erase(num1.end()-1);
    if(num1.size() == num2.size())
        num1.swap(num2);
    
    
    for(int i = 0; i < num1.size();i ++)
        cout << num1[i] << endl;

    while (!num1.empty()){
        num1.pop_back();
    }

    cout << num1.size() << endl;
    return 0;
}
