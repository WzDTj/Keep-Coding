#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int list[n];
        for (int i = 0; i < n; ++i) cin >> list[i];

        for (int i = 0; i < n-1; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (list[i] > list[j]) {
                    int t = list[i];
                    list[i] = list[j];
                    list[j] = t;
                }
            }
        }

        if (n%2) cout << list[n-n/2-1] << endl;
        else cout << (list[n/2-1]+list[n/2])/2 << endl;
    }

    return 0;
}
