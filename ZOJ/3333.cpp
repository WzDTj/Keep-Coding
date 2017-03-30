#include <cstdio>
#include <cstdlib>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    
    int t;
    scanf("%d", &t);

    while (t --) {
        int price_real, price_a, price_b;
        scanf("%d %d %d", &price_real, &price_a, &price_b);

        if ( abs(price_real - price_a) > abs(price_real - price_b) ) printf("B\n");
        else printf("A\n");
    }

    return 0;
}
