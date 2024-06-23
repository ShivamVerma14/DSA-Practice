#include <bits/stdc++.h>
using namespace std;

string trim(string s) {
    int i = 0;
    int j = s.size() - 1;

    while (s[i] == ' ')
        i++;

    while (s[j] == ' ')
        j--;

    return s.substr(i, j - i + 1);
}

string reverseWords(string s) {
    s = trim(s);
    string ans;

    reverse(s.begin(), s.end());

    int i = 0;
    while (i < s.size()) {
        while (i < s.size() && s[i] == ' ')
            i++;

        int len = 0;

        int j = i;
        while (j < s.size() && isalnum(s[j])) {
            j++;
            len++;
        }

        string temp = s.substr(i, len);
        reverse(temp.begin(), temp.end());

        i = j;

        ans += (temp + " ");
    }

    return ans.substr(0, ans.size() - 1);
}

int main() {
    string s = "    the sky is  blue ";

    string ans = reverseWords(s);
    cout << ans << endl;

    return 0;
}