#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int key) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == key)
            return mid;
        else if (nums[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> nums = {2, 11, 34, 45, 55, 76, 83, 92};
    int key = 83;

    cout << key << " is found at " << search(nums, key) << " index.";
    return 0;
}