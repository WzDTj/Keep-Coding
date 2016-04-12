#include <iostream>
#include <algorithm>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);

    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;

        int handshackes[n][2], cnt = 0, maxf = -1;
        for (int i = 0; i < n; ++i) cin >> handshackes[i][0];

        for (int i = n-1; i >= 0; --i) {
            if (handshackes[i][0]) handshackes[i][1] = cnt ++;
            else handshackes[i][1] = cnt;
            
            maxf = max (maxf, handshackes[i][0] + handshackes[i][1]);
            
//            cout << "[i][0]: " << handshackes[i][0] << " [i][1]: " << handshackes[i][1] << endl;
        }

        cout << maxf << endl;
    }
    return 0;
}
