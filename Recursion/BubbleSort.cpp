#include <iostream>
using namespace std;

void sort(int* nums, int n) {
    if (n == 0 || n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
        if (nums[i] > nums[i + 1])
            swap(nums[i], nums[i + 1]);

    sort(nums, n - 1);
}

int main() {
    int nums[] = {2, 5, 1, 6, 9};
    int n = sizeof(nums) / sizeof(int); 

    sort(nums, n);
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}