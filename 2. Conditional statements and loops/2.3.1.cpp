#include <iostream>

using namespace std;

int main() {
    int a, i = 0;
    cin >> a;
    while (a <= 1e7) {
        a *= 2;
        i++;
    }
    cout << a << " " << i << endl;
    return 0;
}