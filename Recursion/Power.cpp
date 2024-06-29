#include <iostream>
using namespace std;

int pow(int a, int b) {
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    int ans = pow(a, b / 2);

    if (b & 1)
        return a * ans * ans;
    else
        return ans * ans;
}

int main() {
    int a = 2;
    int b = 7;

    int ans = pow(a, b);
    cout << ans << endl;

    return 0;
}