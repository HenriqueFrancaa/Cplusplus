#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    set<int>numeros = {1,3,4,5,7,7,9,10,11};

    if(numeros.find(7) == numeros.end()){
        cout << "7 NOT EXIST" << endl;
    }
    else{
        cout << "7 IS FOUND" << endl;
    }

    for(set<int>::iterator it = numeros.begin(); it != numeros.end(); it++){
        cout << *it << endl;
    }
}