#include <iostream>
using namespace std;

int factorial(int num) {
    if (num < 0)
        return 0;

    if (num == 0)
        return 1;

    return num * factorial(num - 1);
}

int main() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    int fact = factorial(num);
    cout << "Factorial = " <<  fact << endl;

    return 0;
}