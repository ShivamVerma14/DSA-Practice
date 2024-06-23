#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {
    string ans;

    for (int i = 0; i < s.size(); i++) {
        if (ans.empty())
            ans.push_back(s[i]);
        else if (ans.back() == s[i])
            ans.pop_back();
        else
            ans.push_back(s[i]);
    }

    return ans;
}

int main() {
    string s = "abbaca";

    string ans = removeDuplicates(s);
    cout << ans << endl;

    return 0;
}