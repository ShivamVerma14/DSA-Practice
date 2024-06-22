#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();

    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] == b[j] && (ans.empty() || ans.back() != a[i])) {
            ans.push_back(a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }

    return ans;
}

int main() {
    vector<int> a = {1, 2, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 5};

    vector<int> ans = findIntersection(a, b);
    for (int& num : ans)
        cout << num << " ";

    return 0;
}