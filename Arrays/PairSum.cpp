#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pairSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target)
                ans.push_back({nums[i], nums[j]});
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5;

    vector<vector<int>> ans = pairSum(nums, target);
    for (auto& pairs : ans) {
        for (int& num : pairs)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}