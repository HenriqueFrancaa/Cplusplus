#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //ver se o número é primo, usando a raiz quadrada
    int numero;
    cin >> numero;
    bool primo = true;

    for(int i = 2; i <= sqrt(numero); i++){
        if(numero%i == 0){
            primo = false;
            break;
        }
    }

    if(primo == true){
        cout << numero << " eh primo" << endl;
    }
    else{
        cout << numero << " nao eh primo" << endl;
    }

    return 0;
}