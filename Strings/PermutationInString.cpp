#include <iostream>
using namespace std;

bool equal(int freq[], int count[]) {
    for (int i = 0; i < 26; i++) {
        if (freq[i] != count[i])
            return false;
    }

    return true;
}

bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};
    for (int i = 0; i < s1.size(); i++)
        freq[s1[i] - 'a']++;

    int i = 0;
    int window = s1.size();
    int count[26] = {0};

    while (i < s2.size() && i < window) {
        count[s2[i] - 'a']++;
        i++;
    }

    if (equal(freq, count))
        return true;

    while (i < s2.size()) {
        count[s2[i] - 'a']++;
        count[s2[i - window] - 'a']--;

        i++;

        if (equal(freq, count))
            return true;
    }

    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}