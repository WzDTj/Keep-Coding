#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    const int MAX_NUMBER = 10000;
    const int base[3] = {10, 12, 16};
    for (int i = 2992; i < MAX_NUMBER; ++i) {
        bool flag = true;
        int ans[3];
        for (int j = 0; j < 3; ++j) {
            int num = i, tans = 0;
            while (num) {
                tans += num%base[j];
                num /= base[j];
            }
            ans[j] = tans;
        }
        
        for (int j = 1; j < 3; ++j) if (ans[j] != ans[j-1]) flag = false;

        if (flag) cout << i << endl;
    }

    return 0;
}
