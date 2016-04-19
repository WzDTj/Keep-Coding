#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int t;
    cin >> t;
    while (t --) {
        string lhs, rhs, ans;
        cin >> lhs >> rhs;
        string::iterator it_lhs = lhs.begin();
        string::iterator it_rhs = rhs.begin();
        int t_lhs, t_rhs, carry = 0, sum;

        while (it_lhs != lhs.end() || it_rhs != rhs.end() || carry) {
            t_lhs = it_lhs != lhs.end() ? (*it_lhs ++) - '0' : 0;
            t_rhs = it_rhs != rhs.end() ? (*it_rhs ++) - '0' : 0;

            sum  = t_lhs + t_rhs + carry;
            carry = sum / 10;

            ans.push_back(sum%10 + '0');
        }

        string::iterator it = ans.begin();
        while (*it == '0') it ++;

        while (it != ans.end()) cout << *it ++;
        cout << endl;
    }

    return 0;
}
