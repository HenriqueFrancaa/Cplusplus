#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string num;
    cin >> num;
    int v;
    for(int i = 0; i < num.size(); i++){
        v = num[i] - '0';
    }

    return 0;
}

