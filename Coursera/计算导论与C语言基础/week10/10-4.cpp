#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

bool inputMatrix(int matrix[][5]);
int main() {
//#ifndef ONLINE_JUDGE
//    freopen("in.txt", "r", stdin);
//#endif
    int matrix[5][5], t, n, m;

    while (inputMatrix(matrix)) {
        cin >> n >> m;
        if (n >= 0 && n < 5 && m >= 0 && m < 5) {
            for (int i = 0; i < 5; ++i) {
                t = matrix[n][i];
                matrix[n][i] = matrix[m][i];
                matrix[m][i] = t;
            }

            for (int i = 0; i < 5; ++i)  {
                for (int j = 0; j < 5; ++j) cout << setw(4) << matrix[i][j];
                cout << endl;
            }
        }
        else cout << "error" << endl;
    }

    return 0;
}

bool inputMatrix(int matrix[][5]) {
    for (int i = 0; i < 5; ++i) 
        for (int j = 0; j < 5; ++j)
            if (!(cin >> matrix[i][j])) return false;
    return true;
}

