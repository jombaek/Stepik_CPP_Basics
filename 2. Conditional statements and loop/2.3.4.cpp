#include <iostream>

using namespace std;

int main() {
    int a, currentYear, sum, nextYear;
    cin >> currentYear;
    nextYear = currentYear;
    do {
        sum = 0;
        nextYear += 1;
        a = nextYear;
        while (a != 0) {
            sum += a % 10;
            a /= 10;
        }  
    } while (sum != 13);
    cout << nextYear << endl;
    return 0;
}