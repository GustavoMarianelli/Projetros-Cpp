#include <iostream>
#include <set>

using namespace std;

int main(int argc, const char** argv) {
    set<int>set1{3,5,1,2,4}; //sempre ordena os elementos
    set<int>set2{50,73,45,98};
    set<int>set3{5,2,7,3,8,1,9,4,6,0};

    set<int>::iterator it;

    for(auto i:set1)
        cout << i << " ";
    cout << endl;

    it=set2.begin();
    set2.insert(it,40);
    it=set2.end();
    set2.insert(it,10);
    it=++ ++ ++set2.begin();
    set2.insert(it,90);

    for(auto i:set2)
        cout << i << " ";
    cout << endl;


   set<int>set4{1,2,3,4,5,6,7,8,9,0};
   it=set4.begin();
   set4.emplace_hint(set4.begin(), 10);//não duplica elementos

   for(auto i:set4)
        cout << i << " ";
    cout << endl;

    //find - retorna o it com o elemento pesquisado

    set<int> set5{1,3,2,5,4,7,6,9,8};
    it=set5.find(8);
    cout << *it << endl;

    //count - quantas vezes o elemento aparece (o set não duplica elementos)
    


    return 0;
}