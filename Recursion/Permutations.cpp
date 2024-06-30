#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums, int index, vector<vector<int>>& ans) {
    if (index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        solve(nums, index + 1, ans);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int index = 0;

    solve(nums, index, ans);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans = permute(nums);
    for (auto& row : ans) {
        for (int& num : row)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}