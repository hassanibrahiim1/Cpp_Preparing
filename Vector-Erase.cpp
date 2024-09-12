#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, tmp;
    vector<int> v ;
    cin >> n ;
    while(n--)
    {
        cin >> tmp ;
        v.push_back(tmp);
    }  
    int f_q ; 
    cin >> f_q ; 
    v.erase(v.begin()+f_q - 1); 
    int s_q_s , s_q_e;
    cin >> s_q_s >> s_q_e ;
    v.erase(v.begin() + s_q_s - 1, v.begin() + s_q_e - 1 );
    cout << v.size() << endl;
    for(auto i : v)
    cout << i << " " ;
    
    return 0;
}

