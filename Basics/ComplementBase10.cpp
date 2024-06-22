#include <iostream>
#include <cmath>
using namespace std;

int complement(int num) {
    int temp = num;
    int mask = 0;

    while (temp) {
        mask = (mask << 1) | 1;
        temp /= 2;
    }
    
    return ~num & mask;
}

int main() {
    int num = 5;

    int ans = complement(num);
    cout << ans << endl;

    return 0;
}