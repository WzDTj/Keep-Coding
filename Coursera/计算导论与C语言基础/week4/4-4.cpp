#include <iostream>

using namespace std;

int main(void)
{
    int min = 101, max = 0, num;
    
    for (int i = 0; i < 6; ++i) {
        cin >> num;
        if (num % 2 && num > max) max = num;
        else if (!(num % 2) && num < min) min = num;
    }

    if (max > min) cout << max - min << endl;
    else cout << min - max << endl;

    return 0;
}
