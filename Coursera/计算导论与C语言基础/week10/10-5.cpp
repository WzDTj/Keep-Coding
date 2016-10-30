#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    const int dir[4][2] = {
        {-1, 0}, {+1, 0}, 
        {0, -1}, {0, +1}, 
    };

    int n;
    while (cin >> n) {
        int matrix[n][n], cnt = 0;
        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < n; ++j) 
                cin >> matrix[i][j];

        for (int i = 1; i < n-1; ++i) {
            for (int j = 1; j < n-1; ++j) {
                int t = matrix[i][j];
                bool flag = true;
                for (int k = 0; k < 4; ++k) {
                    if (!(matrix[i+dir[k][0]][j+dir[k][1]] - t >= 50)) {
                        flag = false;
                        break;
                    } 
                }
                if (flag) ++cnt;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
