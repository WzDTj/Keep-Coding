#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char str[501];

    while (cin.getline(str, 500)) {
        int len = 0, pos = 0, maxLen = 0, maxPos = 0;
        while (str[pos] != '\0') {
            if (str[pos] == ' ' || str[pos] == '.') {
                if (len > maxLen) {
                    maxLen = len;
                    maxPos = pos-len;
                }
                len = 0;
            }
            else {
                ++len;
            }

            ++pos;
        }

        for (int i = maxPos; i < maxPos+maxLen; ++i) {
            cout << str[i];
        }
        cout << endl;
    }

    return 0;
}
