#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    int mediana = 0;
    vector<int>num;

    for(int i = 0; i < t; i++){
        cin >> n;
        num.push_back(n);
    }

    sort(num.begin(), num.end());
    
    if(t%2 != 0){
        mediana = num[t/2];
    }
    else{
        int r;
        r = (num[t/2] + num[t/2 - 1])/ 2;
        mediana = r;
    }

    cout << mediana << endl;
    return 0;
}
