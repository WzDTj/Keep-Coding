#include <iostream>

using namespace std;

int main(void)
{
    int m, n, sum = 0;

    cin >> m >> n;

    if (m%2 == 0) m ++;
    if (n%2 == 0) n --;

    for (int i = m; i <= n; i += 2) {
        sum += i;
    }

    cout << sum << endl;
    return 0;
}
