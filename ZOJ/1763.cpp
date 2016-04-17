#include <iostream>
#include <iomanip>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    double pre = 201, now;

    while (cin >> now && (int)now != 999) {
        if ((int)pre != 201) cout << setiosflags(ios::fixed) << setprecision(2) << now-pre <<endl;
        pre = now;
    }
    
    cout << "End of Output" << endl;

    return 0;
}
