#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& nums) {
    int i = 0;
    int j = nums.size() - 1;

    while (i < j) {
        while (nums[i] == 0)
            i++;

        while (nums[j] == 1)
            j--;

        if (i < j)
            swap(nums[i], nums[j]);
    }
}

int main() {
    vector<int> nums = {0, 1, 1, 0, 0, 1};
    sort(nums);

    for (int& num : nums)
        cout << num << " ";

    return 0;
}