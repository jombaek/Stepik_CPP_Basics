#include <iostream>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    long long sum = 1, t = 1;
    for (int i = 0; i < n; i++) {
        t *= -a;
        sum += t;
    }
    cout << sum << endl;
    return 0;
}