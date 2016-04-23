#include <iostream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int t, n;
    cin >> t;
    while (t --) {
        int total = 0, temp;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            total += temp;
        }

        cout << total+n << endl;
    }

    return 0;
}
