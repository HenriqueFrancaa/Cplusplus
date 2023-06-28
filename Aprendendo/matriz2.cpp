#include <iostream>
using namespace std;

int main(){
    int n,elemento;
    cin >> n;
    int quadrado [n][n];
    int soma = 0;
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < n; coluna++){
            cin >> elemento;
            quadrado[linha][coluna] = elemento;
        }
    }

    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < n; coluna++){
            soma += quadrado[linha][coluna]; 
        }
        cout << "soma da linha "<< linha + 1 << " :" << soma << endl;
        soma = 0;
    }

    return 0;
}