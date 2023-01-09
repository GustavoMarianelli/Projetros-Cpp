#include <iostream>
#include <typeinfo>

using namespace std;

class CFB{

};

int main(int argc, const char** argv) {
    auto num{10};
    CFB cfb;
    cout << typeid(cfb).name() << endl;
    
    if(typeid(int).before(typeid(char)))
        cout << "int antes\n";
    else 
        cout << "char antes\n";
        
    return 0;
}