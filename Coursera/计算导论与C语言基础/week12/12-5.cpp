#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char str[11], substr[4];
    while (cin >> str >> substr) {
        int cnt = 0, max = 0, maxPos = 0;
        while (str[cnt] != '\0') {
            if (str[cnt] > max) {
                maxPos = cnt;
                max = str[cnt];
            }
            ++cnt;
        }

        char backup = str[maxPos+1];
        str[maxPos+1] = '\0';
        cout << str << substr;
        str[maxPos+1] = backup;
        cout << str+maxPos+1 << endl;
    }

    return 0;
}
