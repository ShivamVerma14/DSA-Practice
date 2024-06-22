#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        int temp = nums[i];
        
        int j = i - 1;
        while (j >= 0 && nums[j] > temp) {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = temp;
    }
}

int main() {
    vector<int> nums = {23, 11, 9, 78, 39, 45, 67};

    sort(nums);
    for (int& num : nums)
        cout << num << " ";

    return 0;
}
