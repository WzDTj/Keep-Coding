#include <iostream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int a;
    while (scanf("%d", &a) && a) {
        int ans = 1;
        while (a % 2 == 0) {
            ans <<= 1;
            a /= 2;
        }

        printf("%d\n", ans);
    }

    return 0;
}
