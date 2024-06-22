#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] < nums[mid + 1])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int main() {
    vector<int> nums = {0, 10, 5, 2};

    int peak = findPeak(nums);
    cout << peak << endl;

    return 0;
}