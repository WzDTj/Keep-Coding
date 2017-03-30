#include <cstdio>
#include <cstdlib>

int cmp(const void *a, const void *b) {
    return ((*(double *) a - *(double *) b > 0) ? 1 : -1);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    const int MAX_LENGTH = 500;
    double number[MAX_LENGTH];
    int t, n;
    scanf("%d", &t);

    while (t -- && scanf("%d", &n)) {
        for (int i = 0; i < n; ++i) scanf("%lf", &number[i]);

        qsort(number, n, sizeof(double), cmp);

        if (n%2) printf("%.3lf\n", number[n/2]);
        else printf("%.3lf\n", (number[n/2-1]+number[n/2])/2);
    }

    return 0;
}
