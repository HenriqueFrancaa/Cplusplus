#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){

    double raio,area;
    cin >> raio;

    double pi = 3.14159;

    area = pi * (pow(raio,2));

    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}