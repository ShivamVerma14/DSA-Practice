#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums, vector<int> output, int index, vector<vector<int>>& powerset) {
    if (index >= nums.size()) {
        powerset.push_back(output);
        return;
    }

    // exclude the element
    solve(nums, output, index + 1, powerset);

    // include the element
    output.push_back(nums[index]);
    solve(nums, output, index + 1, powerset);
}

vector<vector<int>> findAllSubsets(vector<int>& nums) {
    vector<vector<int>> powerset;
    vector<int> output;

    int index = 0;
    solve(nums, output, index, powerset);
    return powerset;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> powerset = findAllSubsets(nums);
    for (auto set : powerset) {
        for (int& num : set)
            cout << num << " ";

        cout << endl;
    }

    return 0;
}