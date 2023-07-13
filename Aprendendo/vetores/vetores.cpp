#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    vector<int>numeros;
    
    for(int i =0; i < t; i++){
        cin >> n;
        numeros.push_back(n);      
    }

    cout << numeros.size() << endl;


    return 0;
}
