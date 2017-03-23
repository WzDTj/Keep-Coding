#include <iostream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;
    scanf("%d", &n);

    while (n --) {
        int s, d, x, y;
        bool impossible = false; 
        scanf("%d %d", &s, &d);

        if ( s < d || (s - d) % 2) impossible = true;

        x = (s - d) / 2;
        y = s - x;

        if (impossible) printf("impossible\n");
        else if (x < y) printf("%d %d\n", y, x);
        else printf("%d %d\n", x, y);
    }

    return 0;
}
