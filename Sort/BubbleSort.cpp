#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
            if (nums[j] > nums[j + 1]) {
                swapped = true;
                swap(nums[j], nums[j + 1]);
            }

        if (!swapped)
            break;
    }
}

int main() {
    vector<int> nums = {23, 11, 9, 78, 39, 45, 67};

    sort(nums);
    for (int& num : nums)
        cout << num << " ";

    return 0;
}
