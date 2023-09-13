#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    
    map<int,int>num;
    int n2;
    cin >> n2;
    map<int,int>venc;
    
    num.insert(make_pair(1000, 3));
    num.insert(make_pair(200,1));

    num[n2]++;

    venc.insert(make_pair(num[n2],n2));

    

    return 0;
}