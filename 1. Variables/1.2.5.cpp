#include <iostream>

using namespace std;

int main() {
	int a;
    cin >> a;
    cout << a / 1000 * 1000 + a % 100 / 10 * 100 + a % 1000 / 100 * 10 + a % 10;
}