#include <cstdio>
#include <cstring>

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    const int NAME_LENGTH = 21;

    int t;
    scanf("%d", &t);

    while (t --) {
        int n, first_children_idx;
        char first_children[NAME_LENGTH];

        scanf("%d %s", &n, first_children);

        char childrens[n][NAME_LENGTH];

        for (int i = 0; i < n; ++i) {
            scanf("%s", childrens[i]);
            if (strcmp(first_children, childrens[i]) == 0) first_children_idx = i;
        }

        printf("%s\n", childrens[ (first_children_idx+n/2)%n ]);
    }

    return 0;
}
