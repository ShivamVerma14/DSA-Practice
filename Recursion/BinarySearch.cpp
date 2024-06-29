#include <iostream>
using namespace std;

bool search(int* nums, int low, int high, int key) {
    if (low > high)
        return false;

    int mid = low + (high - low) / 2;

    if (nums[mid] == key)
        return true;
    else if (nums[mid] < key)
        return search(nums, mid + 1, high, key);
    else
        return search(nums, low, mid - 1, key);    
}

int main() {
    int nums[] = {2, 4, 6, 10, 14, 16};
    int n = sizeof(nums) / sizeof(int);
    int key = 14;

    if (search(nums, 0, n - 1, key))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}