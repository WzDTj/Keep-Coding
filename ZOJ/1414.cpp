#include <iostream>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    
    int t;
    cin >> t;
    while (t --) {
        int x, y;
        while (cin >> x >> y) {
            if (x == y || x == y+2) {
                if (x%2) cout << x + y - 1 << endl;
                else cout << x + y << endl;
            }
            else cout << "No Number" << endl;
        }
    }

    return 0;
}
