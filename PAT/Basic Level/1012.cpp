#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    int num, a1 = 0, a2 = 0, a3 = 0, a5 = 0;
    int a2_cnt = 0;
    double a4 = 0.0, a4_num = 0.0, a4_cnt = 0.0;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (num%10 == 0) a1 += num;
        if (num%5 == 1) {
            if (a2_cnt ++ %2) a2 -= num;
            else a2 += num;
            
        }
        if (num%5 == 2) ++a3;
        if (num%5 == 3) {
            a4_num += num;
            ++a4_cnt;
        }
        if (num%5 == 4) a5 = (a5 < num ? num : a5);
    }

    a4 = a4_num / a4_cnt;
    
    if (a1 > 0) cout << a1 << " ";
    else cout << "N ";
    if (a2_cnt != 0) cout << a2 << " ";
    else cout << "N ";
    if (a3 > 0) cout << a3 << " ";
    else cout << "N ";
    if (a4 > 0) cout << setiosflags(ios::fixed) << setprecision(1) << a4 << " ";
    else cout << "N ";
    if (a5 > 0) cout << a5 << endl;
    else cout << "N" << endl;

    return 0;
}
