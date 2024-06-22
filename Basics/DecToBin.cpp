#include <iostream>
#include <cmath>
using namespace std;

int toBinary(int num) {
    int bin = 0;
    int k = 0;

    while (num) {
        int bit = num % 2;
        bin += bit * pow(10, k++);
        num /= 2;
    }

    return bin;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int bin = toBinary(num);
    cout << "Binary number: " << bin;

    return 0;
}