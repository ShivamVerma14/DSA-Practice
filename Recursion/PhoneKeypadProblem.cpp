#include <iostream>
#include <vector>
using namespace std;

void solve(string& digits, string output, int index, vector<string>& ans, string map[]) {
    if (index >= digits.size()) {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = map[number];

    for (int i = 0; i < value.size(); i++) {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, map);
        output.pop_back();
    }
}

vector<string> letterCombinations(string& digits) {
    vector<string> ans;
    string output = "";
    int index = 0;
    string map[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, map);
    return ans;
}

int main() {
    string digits = "423";
    vector<string> ans = letterCombinations(digits);

    for (string& x : ans)
        cout << x << endl;

    return 0;
}