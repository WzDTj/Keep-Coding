#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    const int MAX_LENGTH = 100;

    int t, n, in[MAX_LENGTH], out[MAX_LENGTH];
    scanf("%d", &t);

    while (t --) {
        scanf("%d", &n);
        
        for (int i = 0; i < n; ++i) scanf("%d", &in[i]);
        for (int i = 0; i < n; ++i) scanf("%d", &out[i]);

        bool is_stack = true, is_queue = true;

        for (int i = 0; i < n; ++i) {
            if (in[i] != out[n-i-1]) is_stack = false;
            if (in[i] != out[i]) is_queue = false;
        }

        if (is_stack && is_queue) printf("both\n");
        else if (is_stack) printf("stack\n");
        else if (is_queue) printf("queue\n");
        else printf("neither\n");
    }

    return 0;
}
