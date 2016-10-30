#include <iostream>

using namespace std;

int main(void)
{
    int oneCnt = 0, fiveCnt = 0, tenCnt = 0;
    int cnt, num;
    cin >> cnt;
    for (int i = 0; i < cnt; ++i) {
        cin >> num;
        if (num == 1) oneCnt ++;
        else if (num == 5) fiveCnt ++;
        else if (num == 10) tenCnt ++;
    }
    cout << oneCnt << endl;
    cout << fiveCnt << endl;
    cout << tenCnt << endl;

    return 0;
}
