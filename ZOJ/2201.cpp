#include <iostream>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n, x, y;
    cin >> n;
    while (n --) {
        cin >> x >> y;
        
        if (x >= y) cout << "MMM BRAINS" << endl;
        else cout << "NO BRAINS" << endl;
    }

    return 0;
}
