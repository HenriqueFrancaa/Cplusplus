#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numeros[4] = {3,4,5,7};
    
    int *ponteiro = &numeros[3];

    cout << *ponteiro << endl;
    return 0;
}
