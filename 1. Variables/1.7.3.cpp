#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    cout.setf(ios::fixed);
    cout.precision(6);
    
    double x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << x;
    return 0;
}