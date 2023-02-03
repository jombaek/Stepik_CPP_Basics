#include <iostream>

using namespace std;

int main() {
    int a, b, i = 1;
    cin >> a;
    while (true) {
        b = a;
        cin >> a;
        i += 1;
        if (a == b)
            break;
    }
    cout << i << endl;
    return 0;
}