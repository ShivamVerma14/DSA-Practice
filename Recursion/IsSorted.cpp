#include <iostream>
using namespace std;

bool isSorted(int nums[], int n) {
    if (n == 0 || n == 1)
        return true;

    if (nums[0] > nums[1])
        return false;

    return isSorted(nums + 1, n - 1);
}

int main() {
    int nums[] = {2, 4, 6, 19, 11, 13};
    int n = sizeof(nums) / sizeof(int);

    if (isSorted(nums, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}