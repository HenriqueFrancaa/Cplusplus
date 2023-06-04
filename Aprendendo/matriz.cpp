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
    return 0;
}