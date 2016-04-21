#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;
    while (cin >> n && n) {
        string message;
        cin >> message;

        int cnt = 0, messageLength = message.length();
        while (cnt < n) {
            int position = cnt;
            while (position < messageLength) {
                if (position < messageLength) cout << message[position];
                if (position+2*(n-cnt)-1 < messageLength) cout << message[position+2*(n-cnt)-1];

                position += (2 * n);
            }

            cnt ++;
        }

        cout << endl;
    }

    return 0;
}
