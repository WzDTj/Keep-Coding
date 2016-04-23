#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int t; 
    cin >> t;
    while (t --) {
        int field[5][5], selected[5][2];
        memset(field, 0, sizeof field);
        memset(selected, 0, sizeof selected);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                cin >> field[i][j];

        //stage1
        if (field[0][0] < 3) {
            selected[0][0] = 2;
            selected[0][1] = field[0][2];
        }
        else if (field[0][0] == 3) {
            selected[0][0] = 3;
            selected[0][1] = field[0][3];
        }
        else if (field[0][0] == 4) {
            selected[0][0] = 4;
            selected[0][1] = field[0][4];
        }
        //stage2
        if (field[1][0] == 1) {
            for (int i = 1; i < 5; ++i) {
                if (field[1][i] == 4) {
                    selected[1][0] = i;
                    selected[1][1] = 4;
                }
            }
        }
        else if (field[1][0]%2 == 0) {
            selected[1][0] = selected[0][0];
            selected[1][1] = field[1][selected[0][0]];
        }
        else if (field[1][0] == 3) {
            selected[1][0] = 1;
            selected[1][1] = field[1][1];
        }
        //stage3
        if (field[2][0] == 1) {
            for (int i = 1; i < 5; ++i) {
                if (selected[1][1] == field[2][i]) {
                    selected[2][0] = i;
                    selected[2][1] = field[2][i];
                }
            }
        }
        else if (field[2][0] == 2) {
            for (int i = 1; i < 5; ++i) {
                if (selected[0][1] == field[2][i]) {
                    selected[2][0] = i;
                    selected[2][1] = field[2][i];
                }
            }
        }
        else if (field[2][0] == 3) {
            selected[2][0] = 3;
            selected[2][1] = field[2][3];
        }
        else if (field[2][0] == 4) {
            for (int i = 1; i < 5; ++i) {
                if (field[2][i] == 4) {
                    selected[2][0] = i;
                    selected[2][1] = 4;
                }
            }
        }
        //stage4
        if (field[3][0] == 1) {
            selected[3][0] = selected[0][0];
            selected[3][1] = field[3][selected[0][0]];
        }
        else if (field[3][0] == 2) {
            selected[3][0] = 1;
            selected[3][1] = field[3][1];
        }
        else if (field[3][0] == 3 || field[3][0] == 4) {
            selected[3][0] = selected[1][0];
            selected[3][1] = field[3][selected[1][0]];
        }
        //stage5
        if (field[4][0] == 1) {
            for (int i = 1; i < 5; ++i) {
                if (selected[0][1] ==  field[4][i]) {
                    selected[4][0] = i;
                    selected[4][1] = field[4][i];
                }
            }
        }
        else if (field[4][0] == 2) {
            for (int i = 1; i < 5; ++i) {
                if (selected[1][1] ==  field[4][i]) {
                    selected[4][0] = i;
                    selected[4][1] = field[4][i];
                }
            }
        }
        else if (field[4][0] == 3) {
            for (int i = 1; i < 5; ++i) {
                if (selected[3][1] ==  field[4][i]) {
                    selected[4][0] = i;
                    selected[4][1] = field[4][i];
                }
            }
        }
        else if (field[4][0] == 4) {
            for (int i = 1; i < 5; ++i) {
                if (selected[2][1] ==  field[4][i]) {
                    selected[4][0] = i;
                    selected[4][1] = field[4][i];
                }
            }
        }
        
        //output
        for (int i = 0; i < 5; ++i) 
            cout << selected[i][0] << " " << selected[i][1] << endl;
    }

    return 0;
}
