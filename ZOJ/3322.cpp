#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int t, man_a[3], man_b[3];
    scanf("%d", &t);

    while (t --) {
        for (int i = 0; i < 3; ++i) scanf("%d", &man_a[i]);
        for (int i = 0; i < 3; ++i) scanf("%d", &man_b[i]);

        int a = man_a[0]*10000 + man_a[1]*100 + man_a[2];
        int b = man_b[0]*10000 + man_b[1]*100 + man_b[2];
        
        if (a < b) printf("javaman\n");
        else if (a > b) printf("cpcs\n");
        else printf("same\n");
    }

    return 0;
}
