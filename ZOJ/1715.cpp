#include <iostream>
#include <cstring>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    
    const int MAX_LENGTH = 101;

    int n, q, m, date[MAX_LENGTH];
    while (cin >> n >> q && n+q) {
        memset(date, 0, sizeof date);

        int temp, ans = 0, maxMember = 0;
        while (n -- && cin >> m)
            while (m --) cin >> temp, ++date[temp];

        for (int i = 0; i < MAX_LENGTH; ++i) 
            if (date[i] >= q && date[i] > maxMember) ans = i, maxMember = date[i];

        cout << ans << endl;
    }

    return 0;
}
