#include <iostream>
using namespace std;

int findSum(int nums[], int n) {
    if (n == 0)
        return 0;

    return nums[0] + findSum(nums + 1, n - 1);
}

int main() {
    int nums[] = {3, 2, 5, 1, 6};
    int n = sizeof(nums) / sizeof(int);

    int sum = findSum(nums, n);
    cout << sum << endl;

    return 0;
}