#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool answer;
    answer = (a < c) && (b < c) && (a < d) && (b < d);
    cout << !answer;
    return 0;
}