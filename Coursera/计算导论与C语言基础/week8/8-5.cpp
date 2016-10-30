#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 10; i < n+1; ++i) {
            int temp = i, ans = 0;
            while (temp != 0) {
                ans += temp%10;
                temp /= 10;
            }
            if (i%ans == 0) cout << i << endl;;
        }
    }

    return 0;
}
