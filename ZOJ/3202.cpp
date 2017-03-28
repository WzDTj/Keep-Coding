#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int t, n;
    scanf("%d", &t);
    
    while (t --) {
        int first[2] = {0}, second[2] = {0} , bid;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &bid);
            if (bid > first[1]) {
                second[0] = first[0];
                second[1] = first[1];
                first[0] = i+1;
                first[1] = bid;
            } else if (bid > second[1]) {
                second[0] = i+1;
                second[1] = bid;
            } else {
                continue;
            }
        }

        printf("%d %d\n", first[0], second[1]);
    }

    return 0;
}
