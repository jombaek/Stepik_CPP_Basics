#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool answer;
    answer = (!(!a && b || c) || (b || !a)) && ((!c && !b) && !(b || !a || c));
    cout << answer;
    return 0;
}