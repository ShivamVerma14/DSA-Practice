#include <iostream>
#include <cmath>
using namespace std;

int toDecimal(int num) {
    int dec = 0;
    int k = 0;

    while (num) {
        int lastBit = num % 10;
        dec += lastBit * pow(2, k++);
        num /= 10;
    }

    return dec;
}

int main() {
    int num;
    cout << "Enter a binary number: ";
    cin >> num;

    int dec = toDecimal(num);
    cout << "Decimal number: " << dec << endl;

    return 0;
}