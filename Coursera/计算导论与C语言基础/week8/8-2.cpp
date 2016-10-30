#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        if (n > 100) cout << "Bike" << endl;
        else if (n < 100) cout << "Walk" << endl;
        else cout << "All" << endl;
    }

    return 0;
}
