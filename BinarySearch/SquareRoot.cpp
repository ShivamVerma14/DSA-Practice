#include <iostream>
using namespace std;

int sqrtInteger(int num) {
    int low = 0;
    int high = num;

    int ans = -1;

    while (low <= high) {
        long long int mid = low + (high - low) / 2;
        long long int square = mid * mid;

        if (square == num) {
            return mid;
        } else if (square < num) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

double sqrt(int num, int precision) {
    int temp = sqrtInteger(num);
    double ans = temp;
    double factor = 1;

    for (int i = 0; i < precision; i++) {
        factor /= 10;

        double j = ans;
        while (j * j < num) {
            ans = j;
            j += factor;
        }
    }  

    return ans; 
}

int main() {
    int num = 27;
    double ans = sqrt(num, 3);

    cout << ans << endl;
    return 0;
}