#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int t;
    scanf("%d", &t);

    const char trail[10][3] = { "th", "st", "nd", "rd", "th", "th", "th", "th", "th", "th" };

    while (t --) {
        int n;
        scanf("%d", &n);

        if ( (n/10)%10 == 1 ) printf("%dth\n", n); 
        else printf("%d%s\n", n, trail[n%10]);
    }

    return 0;
}
