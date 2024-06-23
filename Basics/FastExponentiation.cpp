#include <iostream>
using namespace std;

int pow(int x, int n, int m) {
    int res = 1;

    while (n) {
        if (n & 1) 
            res = (1LL * res * (x % m)) % m;

        x = (1LL * (x % m) * (x % m)) % m;
        n >>= 1;
    }

    return res;
}

int main() {
    int x = 4;
    int n = 3;
    int m = 10;

    int ans = pow(x, n, m);
    cout << ans << endl;

    return 0;
}