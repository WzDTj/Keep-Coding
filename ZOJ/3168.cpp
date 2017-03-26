#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    char str[1000];
    while (scanf("%s", str) != EOF) {
        int numberOfSeven = 0, numberOfZ = 0, numberOfO = 0, numberOfJ = 0, cnt = 0;

        for (int i = 0; str[i] != '\0'; ++i) {
            if (str[i] == '7') numberOfSeven ++;
            else if (str[i] == 'Z') numberOfZ ++;
            else if (str[i] == 'O') numberOfO ++;
            else if (str[i] == 'J') numberOfJ ++;
            else str[cnt ++] = str[i];
        }
        str[cnt] = '\0';

        for (int i = 0; i < numberOfZ; ++i) printf("Z");
        for (int i = 0; i < numberOfO; ++i) printf("O");
        for (int i = 0; i < numberOfJ; ++i) printf("J");
        for (int i = 0; i < numberOfSeven; ++i) printf("7");

        printf("%s\n", str);
    }

    return 0;
}
