#include <iostream>
#include <math.h>
using namespace std;


int main(){

    int testes,n;
    cin >> testes;
    int i = 0;

    while( i < testes){
        cin >> n;
        int j = 1;
        int count = 0;
        while(j < n){
            if(n%j == 0){
                count = count + j;
            }
            j++;
        }

        if(count == n){
            cout << n << " eh perfeito" << endl;
        }
        else{
            cout << n << " nao eh perfeito" << endl;
        }

        i++;

    }
    return 0;
}
