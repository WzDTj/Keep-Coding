#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int one = 0, two = 0, three = 0, four = 0, cnt, num;

    cin >> cnt;

    for (int i = 0; i < cnt; i ++) {
        cin >> num;
        if (num > 0 && num <=18) one ++;
        else if (num > 18 && num <= 35) two ++;
        else if (num > 35 && num <= 60) three ++;
        else if (num > 60) four ++;
    }

    cout << fixed << setprecision(2);
    cout << "1-18: " << (double)one / cnt * 100 << "%\n";
    cout << "19-35: " << (double)two / cnt * 100 << "%\n";
    cout << "36-60: " << (double)three / cnt * 100 << "%\n";
    cout << "60-: " << (double)four / cnt * 100 << "%\n";

    return 0;
}
