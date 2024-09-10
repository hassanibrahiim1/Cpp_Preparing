#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*In This Problem I used array of vectors you can read Variable_Sized_Arrays_Explaination.md file for more details*/
int main() {
    
    int n,q;
    int vec_size = 0;
    int tmp = 0;
    
    cin >> n >> q ;
    vector<int> arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> vec_size ;
        for(int j = 0 ; j < vec_size ; j++)
        {
            cin >> tmp;
            arr[i].push_back(tmp);
        }
        
    }
    for(int count = 0; count < q ; count++)
    {
        int i,j;
        cin >> i >> j;
        cout << arr[i][j]<< endl;
    }
    
    return 0;
}
