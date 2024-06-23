#include <iostream>
using namespace std;

/*
int gcd(int a, int b) {
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    return a;
}
*/

int gcd(int a, int b) {
    if (a == 0)
        return b;

    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a = 24;
    int b = 80;

    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;

    return 0;
}