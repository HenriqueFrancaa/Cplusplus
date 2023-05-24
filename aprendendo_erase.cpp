#include <iostream>
#include <vector>
using namespace std;

int main(){
    int entrada;
    cin >> entrada;
    vector<int>numeros;
    for(int i = 0; i < entrada; i++){
        int valor;
        cin >> valor;
        numeros.push_back(valor);
    }
    numeros.insert(numeros.begin()+1,2);
    numeros.erase(numeros.begin()+1);

    return 0;
}