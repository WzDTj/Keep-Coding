#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;
    while (cin >> n && n) {
        bool matrix [n][n];

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> matrix[i][j];
        
        int cnt = 0, rowP = -1, colP = -1;
        for (int i = 0; i < n; ++i) {
            int rowSum = 0, colSum = 0;
            for (int j = 0; j < n; ++j) {
                rowSum += matrix[i][j];
                colSum += matrix[j][i];
            }

            if (rowSum%2) cnt ++, rowP = i;
            if (colSum%2) cnt ++, colP = i;
        }

        if (cnt == 2 && rowP != -1 && colP != -1) cout << "Change bit (" << rowP+1 << "," << colP+1 << ")" << endl;
        else if (cnt >= 2) cout << "Corrupt" << endl;
        else cout << "OK" << endl;
    }


    return 0;
}
