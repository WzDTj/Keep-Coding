#include <iostream>
#include <cstring>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    
    const int MAX_LENGTH = 10002;

    int n, m, temp;
    int originalTickets[MAX_LENGTH];

    while (cin >> n >> m && n+m) {
        int cnt = 0;
        memset(originalTickets, 0, sizeof originalTickets);

        for (int i = 0; i < m; ++i)
            cin >> temp, ++originalTickets[temp];

        for (int i = 0; i < n+1; ++i)
            if (originalTickets[i] > 1) cnt ++;

        cout << cnt << endl;
    }

    return 0;
}
