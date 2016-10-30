#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        int list[n];
        for (int i = 0; i < n; ++i) 
            cin >> list[i];
        
        int mid = n-m;
        for (int i = 0; 2*i < mid; ++i) {
            int t = list[i];
            list[i] = list[mid-i-1];
            list[mid-i-1] = t;
        }

        for (int i = mid, cnt = 0; mid+2*cnt < n; ++i, ++cnt) {
            int t = list[i];
            list[i] = list[n-cnt-1];
            list[n-cnt-1] = t;
        }
        
        for (int i = 0; 2*i < n; ++i) {
            int t = list[i];
            list[i] = list[n-i-1];
            list[n-i-1] = t;
        }

        for (int i = 0; i < n; ++i) {
            cout << list[i];
            i != n-1 ? cout << " " : cout << endl;
        }
    }

    return 0;
}
