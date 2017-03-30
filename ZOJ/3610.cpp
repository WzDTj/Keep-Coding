#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    const int MAX_LENGTH = 21;

    int t;
    scanf("%d", &t);

    while (t --) {
        char whatever[3][MAX_LENGTH];

        for (int i = 0; i < 3; ++i) scanf("%s", whatever[i]); 

        printf("%s will survive\n", whatever[1]);
    }

    return 0;
}
