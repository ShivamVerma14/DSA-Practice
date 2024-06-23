#include <iostream>
#include <cstring>
using namespace std;

bool isValid(char ch) {
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch <= '0' && ch >= '9'));
}

bool isPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
        while (i < s.size() && !isValid(s[i]))
            i++;

        while (j >= 0 && !isValid(s[j]))
            j--;

        if (i < j) {
            if (tolower(s[i]) != tolower(s[j]))
                return false;
        }

        i++;
        j--;
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}