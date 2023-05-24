#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    string nome;
    cin >> nome;

    n = pow(n,2);
    cout << n << endl;
    
    for(int i = 0; i < nome.size(); i++){
        if(nome[i] == 'h'){
            continue;
        }
        cout << nome[i] << endl;
    }

    int entrada;
    cin >> entrada;
    vector<int>numeros;
    numeros.push_back(entrada);
    numeros.push_back(entrada);
    numeros.push_back(entrada);
    
    cout << numeros.size() << endl;

    cout << numeros.empty() << endl;

    if(numeros.empty() == false){
        cout << "entrou" << endl;
    }

    return 0;
    

}