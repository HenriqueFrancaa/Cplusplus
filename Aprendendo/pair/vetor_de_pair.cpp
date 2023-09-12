#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int n, m;
    int t;
    cin >> t;
    vector<pair<int,int>>pares;

    for(int i = 0; i < t; i++){
        cin >> n >> m;
        pares.push_back(make_pair(n,m));
    }

    cout << pares[0].first << endl;
    return 0;
}