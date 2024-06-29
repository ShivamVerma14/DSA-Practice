#include <iostream>
using namespace std;

void sort(int* nums, int n, int beg) {
    if (n == 0 || n == 1)
        return;

    if (beg >= n)
        return;

    int minIdx = beg;

    for (int i = beg + 1; i < n; i++) {
        if (nums[i] < nums[minIdx])
            minIdx = i;
    }

    if (minIdx != beg)
        swap(nums[beg], nums[minIdx]);

    sort(nums, n, beg + 1);
}

int main() {
    int nums[] = {2, 5, 1, 6, 9};
    int n = sizeof(nums) / sizeof(int); 

    sort(nums, n, 0);
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}