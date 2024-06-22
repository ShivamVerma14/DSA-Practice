#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllDuplicates(vector<int>& nums) {
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[abs(nums[i]) - 1] < 0)
            ans.push_back(abs(nums[i]));
        else
            nums[abs(nums[i]) - 1] *= -1;
    }

    return ans;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> duplicates = findAllDuplicates(nums);
    for (int& num : duplicates)
        cout << num << " ";

    return 0;
}