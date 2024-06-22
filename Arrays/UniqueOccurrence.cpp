#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<int> counts;

    int i = 0;
    while (i < nums.size()) {
        int count = 1;

        for (int j = i + 1; j < nums.size(); j++)
            if (nums[i] == nums[j])
                count++;
            else
                break;

        counts.push_back(count);
        i += count;
    }

    sort(counts.begin(), counts.end());

    for (int i = 1; i < counts.size(); i++)
        if (counts[i] == counts[i - 1])
            return false;

    return true;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1, 3};

    if (uniqueOccurrences(nums))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}