#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, k;
    while (cin >> n >> k) {
        bool flag = false;
        int num[n];
        for (int i = 0; i < n; ++i)
            cin >> num[i];
            
        for (int i = 0; i < n-1; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (flag) break;
                if (num[i]+num[j] == k) {
                    flag = true;
                }
            }
        }
        
        if (flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
