#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int gcd(int lhs, int rhs);

int main() {
    int t;
    while(cin >> t && t != 0) {
        int num[t], noCommonFact = 0;
        for (int i = 0; i < t; ++i) {
            cin >> num[i];
            for (int j = 0; j < i; ++j) {
                if (gcd(num[i], num[j]) == 1) ++noCommonFact;
            }
        }

        if (noCommonFact)cout << setiosflags(ios::fixed) << setprecision(6) <<  sqrt( (3.0*(t*t-t)) / noCommonFact ) << endl;
        else cout << "No estimate for this data set." << endl;
    }
    return 0;
}

int gcd(int lhs, int rhs) {
    if (lhs % rhs == 0) return rhs;
    else return gcd(rhs, lhs%rhs);
}
