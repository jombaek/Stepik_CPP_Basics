#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool answer;
    answer = a || !a || b && (c || b && !a);
    cout << answer;
    return 0;
}