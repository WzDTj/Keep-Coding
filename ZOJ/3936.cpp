#include <iostream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;
    cin >> n;
    while (n --) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << c << " " << b + d << endl;
        cout << a << " " << b + d << endl;
    }

    return 0;
}
