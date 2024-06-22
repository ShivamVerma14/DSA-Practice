#include <bits/stdc++.h>
using namespace std;

vector<int> add(vector<int>& a, vector<int>& b) {
    vector<int> ans;

    int i = a.size() - 1;
    int j = b.size() - 1;

    int carry = 0;

    while(i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum %= 10;

        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum %= 10;

        ans.push_back(sum);
        i--;
    }

    while (j >= 0) {
        int sum = a[j] + carry;
        carry = sum / 10;
        sum %= 10;

        ans.push_back(sum);
        j--;
    }

    if (carry) {
        ans.push_back(carry);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> a = {4, 5, 1};
    vector<int> b = {6, 9, 5};

    vector<int> ans = add(a, b);
    for (int& digit : ans)
        cout << digit;

    return 0;
}