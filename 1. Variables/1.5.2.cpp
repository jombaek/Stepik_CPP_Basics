#include <iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    cout.setf(ios::fixed);
    cout.precision(10);

    cout << a / b;
    return 0;
}