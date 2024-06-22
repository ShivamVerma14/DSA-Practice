#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& nums) {
    int j = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    while (j < nums.size()) {
        nums[j] = 0;
        j++;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeros(nums);
    for (int& num : nums)
        cout << num << " ";

    return 0;
}