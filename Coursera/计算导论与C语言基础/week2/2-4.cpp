#include <iostream>

using namespace std;

int main(void)
{
    int cnt, oneCnt = 0, num;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        cin >> num;
        while (num) {
            if (num%2) oneCnt ++;
            num /= 2; 
        }
        cout << oneCnt << endl;
        oneCnt = 0;
    }
    return 0;
}
