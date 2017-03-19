#include <iostream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;
    scanf("%d", &n);

    while (n --) {
        int days;
        scanf("%d", &days);

        int d[16];
        for (int i = 0; i < 16; ++i) scanf("%d", &d[i]);

        int dish[22][22];
        for (int i = 0; i < 22; ++i)
            for (int j = 0; j < 22; ++j) dish[i][j] = 0;

        for (int i = 1; i < 21; ++i)
            for (int j = 1; j < 21; ++j) scanf("%d", &dish[i][j]);

        // simlulate
        while (days --) {
            int next_day[22][22];
            for (int i = 0; i < 22; ++i)
                for (int j = 0; j < 22; ++j) next_day[i][j] = 0;
            
            for (int i = 1; i < 21; ++i) {
                for (int j = 1; j < 21; ++j) {
                    int k = dish[i-1][j] + dish[i+1][j] + dish[i][j-1] + dish[i][j+1] + dish[i][j];
                    next_day[i][j] = dish[i][j] + d[k];

                    if (next_day[i][j] > 3) next_day[i][j] = 3;
                    else if (next_day[i][j] < 0) next_day[i][j] = 0;
                }
            }

            for (int i = 1; i < 21; ++i) 
                for (int j = 1; j < 21; ++j) dish[i][j] = next_day[i][j];
        }

        for (int i = 1; i < 21; ++i) {
            for (int j = 1; j < 21; ++j) {
                if (dish[i][j] == 0) printf(".");
                else if (dish[i][j] == 1) printf("!");
                else if (dish[i][j] == 2) printf("X");
                else if (dish[i][j] == 3) printf("#");
            }

            printf("\n");
        }

        if (n) printf("\n");
    }

    return 0;
}
