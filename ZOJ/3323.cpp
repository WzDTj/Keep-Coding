#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    const int MAX_LENGTH = 20;
    char password[MAX_LENGTH];

    int t;
    scanf("%d", &t);
    
    while (t -- && scanf("%s", password)) {
        for (int i = 0; password[i] != '\0'; ++i) {
            if (password[i] < 48 || password[i] > 57) printf("%c", password[i]);
        }    
        printf("\n");
    }

    return 0;
}
