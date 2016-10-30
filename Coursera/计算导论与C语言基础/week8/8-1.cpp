#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int sum = 0, n, num[5];
    cin >> n;
    for (int i = 0; i < 5; ++i) {
        cin >> num[i];
        if (num[i] < n) sum += num[i];
    }

    cout << sum << endl;

    return 0;
}
