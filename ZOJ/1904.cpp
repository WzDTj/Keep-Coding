#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    const double PI = 3.1415926535898;
    int d, v;
    while (cin >> d >> v && d+v) {
        cout << setiosflags(ios::fixed) << setprecision(3) << pow(d*d*d-6*v/PI, 1/3.0) << endl;

    }

    return 0;
}
