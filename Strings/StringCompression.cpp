#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int i = 0;
    int p = 0;

    while(i < n) {
        int j = i + 1;
        while (j < n && chars[j] == chars[i])
            j++;

        chars[p++] = chars[i];
        
        int count = j - i;
        if (count > 1) {
            string c = to_string(count);

            for (char ch : c)
                chars[p++] = ch;
        }

        i = j;             
    }

    return p;
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int len = compress(chars);
    for (int i = 0; i < len; i++)
        cout << chars[i] << " ";

    return 0;
}