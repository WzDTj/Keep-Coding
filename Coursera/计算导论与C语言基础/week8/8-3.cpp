#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, k;
    while (cin >> n >> k) {
        double sum = 200.0;
        for (int i = 0; i < 20; ++i) {
            if (sum <= n * (i+1)) {
                cout << i+1 << endl;
                break;
            }
            sum *= (1+k/100.0);
        }
        if (sum > n*20) cout << "Impossible" << endl;
    }

    return 0;
}
