#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int MAX_ITEM_NUM = 501;
    const int LOOP = 2;
    int dp[LOOP][MAX_ITEM_NUM][MAX_ITEM_NUM];
    
    int cases = 0, caravansNo;
    while (cin >> caravansNo && caravansNo != 0) {
        int helms[3], armors[3], boots[3], sets[4], cars[caravansNo][2];
        
        //input data.
        for (int i = 0; i < 3; ++i) cin >> helms[i];
        for (int i = 0; i < 3; ++i) cin >> armors[i];
        for (int i = 0; i < 3; ++i) cin >> boots[i];
        for (int i = 0; i < 4; ++i) cin >> sets[i];
        for (int i = 0; i < caravansNo; ++i)
            for (int j = 0; j < 2; ++j) cin >> cars[i][j];
        //core.
        memset(dp, 0, sizeof(dp));
        int pre = 0, now = 1;
        int helmMaxSum = 0, armorMaxSum = 0;
        int helmMax = 0, armorMax = 0, bootMax = 0;;
        dp[0][0][0] = 0;
        for (int i = 0; i < caravansNo; ++i) {
            memset(dp[now], -1, sizeof(dp[now]));
            helmMax = min(cars[i][0]/helms[0], cars[i][1]/helms[1]);

            for (int j = 0; j < helmMax+1; ++j) {
                armorMax = min((cars[i][0]-j*helms[0])/armors[0], (cars[i][1]-j*helms[1])/armors[1]);

                for (int k = 0; k < armorMax+1; ++k) {
                    bootMax = min((cars[i][0]-j*helms[0]-k*armors[0])/boots[0], (cars[i][1]-j*helms[1]-k*armors[1])/boots[1]);
                    
                    for (int x = 0; x < helmMaxSum+1; ++x) {
                        for (int y = 0; y < armorMaxSum+1; ++y) {
                            if (dp[pre][x][y] != -1) dp[now][x+j][y+k] = max(dp[now][x+j][y+k], dp[pre][x][y] + bootMax);
                        }
                    }
                }
            }
            swap(pre, now);
            helmMaxSum += helmMax;
            armorMaxSum += min(cars[i][0]/armors[0], cars[i][1]/armors[1]);
        }
        //output
        int defendCapability = 0;
        for (int i = 0; i < helmMaxSum+1; ++i) {
            for (int j = 0; j < armorMaxSum+1; ++j) {
                if (dp[pre][i][j] == -1) continue;
                int setNum = min(min(i/sets[0], j/sets[1]), dp[pre][i][j]/sets[2]);
                defendCapability = max(defendCapability, setNum*sets[3]+(i-setNum*sets[0])*helms[2]+(j-setNum*sets[1])*armors[2]+(dp[pre][i][j]-setNum*sets[2])*boots[2]);
            }
        }
        if (cases) cout << endl;
        cout << "Case " << ++cases << ": " << defendCapability << endl;
    }
    
    return 0;
}
