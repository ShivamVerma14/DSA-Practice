#include <iostream>
using namespace std;

string removeOccurrences(string s, const string& part) {
    while (s.find(part) != -1) {
        int pos = s.find(part);
        s.replace(pos, part.size(), "");
    }

    return s;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";

    string ans = removeOccurrences(s, part);
    cout << ans << endl;

    return 0;
}