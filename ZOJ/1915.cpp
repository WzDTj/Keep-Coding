#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int t;
    cin >> t;
    while (t --) {
        int n, cnt = 0, sum = 0;
        double average;
        cin >> n;
        int grade[n];

        for (int i = 0; i < n; ++i) {
            cin >> grade[i];
            sum += grade[i];
        }

        average = (double)sum/n;

        for (int i = 0; i < n; ++i) 
            if (grade[i] > average) cnt ++;

        cout << setiosflags(ios::fixed) << setprecision(3) << (double)cnt/n*100 << "%" <<endl;
    }

    return 0;
}
