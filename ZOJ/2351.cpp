#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    bool flag = false;
    int t;
    cin >> t;
    while (t --) {
        if (flag) cout << endl;
        else flag = true;

        double ka, original, ans;
        int m, n;
        while (cin >> ka >> original >> m >> n && (ka||original||m||n)) {
            ans = (sqrt(ka*ka+4*m*n*ka*original)-ka)/(2*n);
            cout << setiosflags(ios::fixed) << setprecision(3) << -log10(ans) << endl;
        }
    }

    return 0;
}
