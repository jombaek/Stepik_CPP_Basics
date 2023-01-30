#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout.setf(ios::fixed);
    cout.precision(n);
    
    long double pi = 3.141592653589793;
    cout << pi;
    return 0;
}