#include <iostream>
#include <vector>
using namespace std;

void solve(string& s, string output, int index, vector<string>& ans) {
    if (index >= s.size()) {
        ans.push_back(output);
        return;
    }

    solve(s, output, index + 1, ans);

    output += s[index];
    solve(s, output, index + 1, ans);
}

vector<string> findAllSubsequences(string& s) {
    vector<string> ans;
    string output = "";

    int index = 0;
    solve(s, output, index, ans);
    return ans;
}

int main() {
    string s = "abcd";
    vector<string> ans = findAllSubsequences(s);

    for(string& str : ans)
        cout << str << endl;

    return 0;
}