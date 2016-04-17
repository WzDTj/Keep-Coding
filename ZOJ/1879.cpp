#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    const int MAX_LENGTH = 3002;

    int n, pre, now, diff[MAX_LENGTH];
    bool flags;
    while (cin >> n) {
        memset(diff, 0, sizeof diff);
        flags = true;

        cin >> pre;
        for (int i = 0; i < n-1; ++i) {
            cin >> now;
            diff[(int)abs(pre-now)] = 1;
            pre = now;
        }

        for (int i = 1; i < n; ++i)
            if (diff[i] == 0) flags = false;

        if (flags) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }

    return 0;
}
