#include <iostream>

using namespace std;

int main() {
    long double a;
    cin >> a;
    
    cout.setf(ios::fixed);
    cout.precision(0);

    cout << float(a) - a;
    return 0;
}