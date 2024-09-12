#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n ,tmp; 
    cin >> n ;
    while(n--) {
    cin >> tmp ;
    v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(auto i : v)
    cout << i << " ";   
    return 0;
}

