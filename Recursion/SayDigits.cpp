#include <iostream>
using namespace std;

void sayDigits(int n, string digits[]) {
    if (n == 0)
        return;

    sayDigits(n / 10, digits);
    cout << digits[n % 10] << " ";
}

int main() {
    string digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n = 412;
    sayDigits(n, digits);

    return 0;
}