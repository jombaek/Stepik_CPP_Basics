#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (a > b) + (a > c) + (a > d) + (b > c) +(b > d) + (c > d);
    return 0;
}