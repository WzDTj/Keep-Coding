#include <cstdio>

int main() {
//    freopen("in.txt", "r", stdin);

    int n, score, sum = 0;
    scanf("%d", &n);

    while (n --) {
        sum = 0;

        for (int i = 0; i < 4; ++i) {
            scanf("%d", &score);
            sum += score;
        }

        if (sum >= 80) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
