#include <iostream>
#include "classes.h"

using namespace std;

int main(int argc, char const *argv[]){
    Base1 *ob1 = new Base1();
    Base2 *ob2 = new Base2();

    CFB *ob3 = new CFB();
    
    ob1->impBase1();
    ob2->impBase2();

    ob3->impBase1();
    ob3->impBase2();
    
    return 0;
}
