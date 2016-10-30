#include <iostream>
#include <cstdio>
#include <list>

using namespace std;

int main() {
    list<char> beads;
    char temp, bead; int n, pos;
    while (scanf("%c", &temp) && temp != '\n') beads.push_back(temp);

    list<char>::iterator it;

    scanf("%d", &n);
    while (n --) {
        scanf("%d %c", &pos, &bead);
        list<char>::iterator it_cur, it_front, it_back;
        it_cur = beads.begin(); it = beads.begin();

        for (int i = 0; i < pos; ++i, ++it_cur);

        it_cur = beads.insert(it_cur, bead);

        while (1) {
            int count = 1;
            --(it_front = it_cur); ++(it_back = it_cur);
            if (it_cur == beads.end()) --it_back;

            while (it_front != --beads.begin() && *it_front == bead) ++count, --it_front;
            while (it_back != beads.end() && *it_back == bead) ++count, ++it_back;

            if (3 <= count)  {
                it_cur = beads.erase(++it_front, it_back);
                bead = *it_cur;
            }
            else break;
        }

        if (beads.size() == 0) printf("-\n");
        else {
            it = beads.begin();
            while (it != beads.end()) printf("%c", *it ++);
            printf("\n");
        }
    }

    return 0;
}
