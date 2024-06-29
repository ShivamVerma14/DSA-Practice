#include <iostream>
using namespace std;

bool isPalindrome(string s, int beg, int end) {
    if (beg >= end)
        return true;

    if (s[beg] != s[end])
        return false;

    return isPalindrome(s, beg + 1, end - 1);
}

int main() {
    string s = "racecar";
    int len = s.size();

    if (isPalindrome(s, 0, len - 1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}