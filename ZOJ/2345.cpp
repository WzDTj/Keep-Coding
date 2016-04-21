#include <iostream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n, days;
    bool flag = false;

    cin >> n;

    while (n --) {
        if (flag) cout << endl;
        else flag = !flag;

        while (cin >> days && days) {
            int golds = 0, cnt = 0, cnt_days = 0;

            while (cnt_days+cnt <= days) {
                golds += (cnt * cnt);
                cnt_days += cnt;
                cnt ++;
            }
            golds += (cnt * (days-cnt_days));
            
            cout << days << " " << golds << endl;
        }
    }

    return 0;
}
