#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int angle;
    while (scanf("%d", &angle) != EOF && angle != -1) {
        angle -= 90;
        angle %= 360;
        int clock = angle / 30;
        
        if (angle % 30) {
            printf("Between %d o'clock and %d o'clock\n", (11 - clock) % 12, (12 - clock) % 12);
        } else printf("Exactly %d o'clock\n", (12 - clock) % 12);
    }

    return 0;
}
