#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
   
    int t;
    scanf("%d", &t);

    while (t --) {
        char type[10];
        int n, best = 0, record;
        bool bigger_is_greater = true;
        scanf("%s\n%d", type, &n);

        if (type[0] == 'F') {
            bigger_is_greater = false;
            best = 2008;
        }

        for (int i = 0; i < n; ++i) {
            scanf("%d", &record);
            if ( (bigger_is_greater && record > best) || (!bigger_is_greater && record < best) ) best = record;
        }

        printf("%d\n", best);
    }

    return 0;
}
