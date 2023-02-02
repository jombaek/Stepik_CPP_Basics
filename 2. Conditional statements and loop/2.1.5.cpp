#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool e, f, g, h, i, j;
    e = a != b;
    f = a != c;
    g = a != d;
    h = b != c;
    i = b != d;
    j = c != d;
    cout << (e && f && g) + (h && i) + j + 1;
    return 0;
}