#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    float n1,n2;
    cin >> n1;
    cin >> n2;


    float peso1 = 3.5;
    float peso2 = 7.5;

    float media = ((n1 * peso1) + (n2 * peso2)) / (peso1 + peso2);

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;

    return 0;
}
