#include <iostream>
using namespace std;

void reverse(string& s, int beg, int end) {
    if (beg >= end)
        return;

    swap(s[beg], s[end]);
    reverse(s, beg + 1, end - 1);
}

int main() {
    string s = "abcde";
    int len = s.size();

    reverse(s, 0, len - 1);

    cout << s << endl;

    return 0;
}