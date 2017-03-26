#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n, m, cnt = 0;
    while (scanf("%d %d", &n, &m) != EOF && n+m != 0) {
        int image[100][100] = {{0}};

        int temp;
        for (int s = 0; s < 3; ++s) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    scanf("%d", &temp);
                    image[i][j] += temp;
                }
            }
        }

        printf("Case %d:\n", ++cnt);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                printf("%d", image[i][j] / 3);
                j + 1 == m ? printf("\n") : printf(",");
            }
        }
    }

    return 0;
}
