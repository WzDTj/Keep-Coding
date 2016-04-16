#include <iostream>
#include <algorithm>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    
    int n;
    while (cin >> n)  {
        int cnt1 = 0, cnt2 = 0;
        bool light, case1 = true, case2 = false;
        for (int i = 0; i < n; ++i) {
            cin >> light;

            if (light == case1) cnt1 ++;
            if (light == case2) cnt2 ++;

            case1 = !case1;
            case2 = !case2;
        }

        cout << min(cnt1, cnt2) << endl;
    }
    return 0;
}
