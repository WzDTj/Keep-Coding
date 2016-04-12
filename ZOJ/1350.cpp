#include <iostream>
#include <cstring>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while (t --) {
        int n, escapeNumber = 0;
        cin >> n;

        bool cells[n];
        memset(cells, 0, sizeof cells);

        for (int i = 0; i < n; ++i) 
            for (int j = i; j < n; j+=(i+1)) cells[j] = !cells[j];

        for (int i = 0; i < n; ++i) if (cells[i]) ++escapeNumber;

        cout  << escapeNumber << endl;
    }

    return 0;
}
