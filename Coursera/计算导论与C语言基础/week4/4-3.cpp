#include <iostream>

using namespace std;

int main(void)
{
    int max = 0, num, cnt;

    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        cin >> num;
        if (num > max) max = num;
    }

    cout << max << endl;
    return 0;
}
