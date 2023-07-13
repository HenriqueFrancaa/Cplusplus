#include <iostream>
using namespace std;

int main(){
    int n,elemento;
    cin >> n;
    int quadrado [n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> elemento;
            quadrado[i][j] = elemento;
        }
    }

    cout << endl;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << quadrado[i][j] << " ";
        }
        cout << endl;
    }

    int soma_linha;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            soma_linha = quadrado[i][j] + quadrado[i][j+1];
        }
        cout << "soma da linha "<< i << " : " << soma_linha << endl;
        soma_linha = 0;
    }

    return 0 ;
}