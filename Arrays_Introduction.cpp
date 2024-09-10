#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n ;
    int arr[n];
    for(int i = 0; i < n ; i++){
    cin >> arr[i] ;
    }
    
    for(int i = 0 ; i < n ;i++){
        //printf("%d ", arr[n-i-1]);
        cout << arr[n-i-1] << " ";
    }

    return 0;
}
