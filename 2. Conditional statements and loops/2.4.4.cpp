#include <iostream>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    long long sum = 1, t = a;
    for (int i = 0; i < n; i++) {         
        sum += t;
        t *= a;
    }
    cout << sum << endl;
    return 0;
}