#include <iostream>
using namespace std;

bool isPowerOfTwo(int num) {
    if (num == 1)
        return true;

    int k = 1;
    
    for (int i = 1; i <= 30; i++) {
        k *= 2;
        if (k == num)
            return true;
    }

    return false;
}

int main() {
    int num = 2048;

    bool ans = isPowerOfTwo(num);
    if (ans)
        cout << "Yes";
    else 
        cout << "No";
    

    return 0;
}