#include <iostream>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    
    int n;
    while (cin >> n && n != 0) {
        int lhs, rhs, total = 0, meatballs[n];
        
        for (int i = 0; i < n; ++i) {
            cin >> meatballs[i];
            total += meatballs[i];
        }
        
        if (total%2 == 0) {
            lhs = total/2;
            rhs = total/2;
            int lo = -1, hi = n;
            bool flags = false;

            while (lo < hi && !flags) {
                if (hi - lo == 1) {
                    if (lhs - meatballs[lo+1] == 0 && rhs == 0) lhs -= meatballs[++lo];
                    else if (rhs - meatballs[hi-1] == 0 && lhs == 0) rhs -= meatballs[--hi];
                }
                
                if (lhs > 0) lhs -= meatballs[++lo];
                if (rhs > 0) rhs -= meatballs[--hi];
                
                if (lhs < 0 || rhs < 0) break;
                if (lhs == 0 && rhs == 0) flags = true;
            }

            if (flags) cout << "Sam stops at position " << lo+1 << " and Ella stops at position " << hi+1 << "." << endl;
            else cout << "No equal partitioning." << endl;
        }
        else cout << "No equal partitioning." << endl;
    }
    return 0;
}
