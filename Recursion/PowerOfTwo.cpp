#include <iostream>
using namespace std;

int pow(int n) {
    if (n == 0)
        return 1;

    return 2 * pow(n - 1);
}

int main() {
    int n = 10;

    cout << pow(10) << endl;
    return 0;
}