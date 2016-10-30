#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int num;
    while (cin >> num) {
        double point[num][2], maxDis = 0.0;
        for (int i = 0; i < num; ++i) {
            cin >> point[i][0] >> point[i][1];
            for (int j = 0; j < i; ++j) {
                double len = abs(point[i][0]-point[j][0]);
                double wid = abs(point[i][1]-point[j][1]);
                double dis = sqrt(len*len + wid*wid);
                if (dis > maxDis) maxDis = dis;
            }
        }
        cout << fixed << setprecision(4) << maxDis << endl;
    }

    return 0;
}
