#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;
    while (scanf("%d", &n) != EOF) {
        int ans = 0, temp = n;
        while (temp) {
            ans += pow(temp%10, 3);
            temp /= 10;
        }

        if (ans == n) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
