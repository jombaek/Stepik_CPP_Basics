#include <iostream>

using namespace std;

int main() {
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z') {
        cout << "small" << endl;
    } else if (a >= 'A' && a <= 'Z') {
        cout << "BIG" << endl;
    }
    return 0;
}