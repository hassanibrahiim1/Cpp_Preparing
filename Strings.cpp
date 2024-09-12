#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin >> a >> b;
    int size_a = a.size();
    int size_b = b.size();
    cout << size_a << " " << size_b << endl;
    cout << a + b << endl ;
    char tmp = a[0];
    a[0] = b[0] ;
    b[0] = tmp;  
    cout << a << " " << b ;
    return 0;
}

