#include <iostream>
#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int wA, wB, wC, wD, lA, lB, lC, lD;

    
    while (scanf("%d %d %d %d %d %d", &wA, &lA, &wB, &lB, &wC, &lC) && wA+lA+wB+lB+wC+lC) {
        wD = lA + lB - wC;
        lD = wA + wB - lC;
        printf("Anna's won-loss record is %d-%d.\n", wD, lD);
    }

    return 0;
}
