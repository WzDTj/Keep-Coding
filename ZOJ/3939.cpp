#include <iostream>
#include <cstdio>

using namespace std;

int weekday(int yyyy, int mm, int dd);

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int t;
    cin >> t;
    while (t --) {
        int ty, tm, td, n;
        cin >> ty >> tm >> td >> n;

        ty += 400*((n-1)/2058);
        n = (n-1)%2058;

        while (n) {
            td += 10;
            if (td > 21) tm ++, td = 1;
            if (tm > 12) ty ++, tm = 1;

            if (weekday(ty, tm, td) == 1) n--;
        }
        cout << ty << " " << tm << " " << td << endl;
    }

    return 0;
}

int weekday(int yyyy, int mm, int dd) {
    int tm = mm >= 3 ? mm-2 : mm+10;
    int ty = mm >= 3 ? yyyy : yyyy-1;

    return (ty+ty/4-ty/100+ty/400+(int)(2.6*tm-0.2)+dd)%7;
}
