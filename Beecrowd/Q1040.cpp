#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    
    double n1,n2,n3,n4,n5,sum;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    sum = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    cout << fixed << setprecision(1);
    cout << "Media: " << sum << endl;
    if(sum >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if(sum >= 5){
        cout << "Aluno em exame." << endl;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        if((n5 + sum) /2.0 > 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else{
            cout  << "Aluno reprovado" << endl;
        }
        cout << "Media final: " << (n5+sum)/2.0 << endl;
    }
    else{
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}