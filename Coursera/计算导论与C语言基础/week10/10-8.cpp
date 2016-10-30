#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int trees[10001], l, m;
    while (cin >> l >> m) {
        for (int i = 0; i < l+1; ++i) trees[i] = 1;

        for (int i = 0; i < m; ++i) {
            int lo, hi;
            cin >> lo >> hi;

            for (int j = lo; j < hi+1; j++) trees[j] = 0;
        }
        int cnt = 0;
        for (int i = 0; i < l+1; ++i) 
            if (trees[i] == 1) ++cnt;

        cout << cnt << endl;
    }
    return 0;
}
