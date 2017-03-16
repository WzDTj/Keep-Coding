#include <iostream>
#include <cmath>

using namespace std;

int main () {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
	
	int t, n;
    cin >> t;
	while (t -- && cin >> n) {
		int remainder, beforProcess, afterProcess, cnt = 0, ans = 0;
        while (pow(5, ++cnt) < n+1) {
            beforProcess = n/pow(5, cnt);
            remainder = beforProcess % 5;
            afterProcess = beforProcess / 5 * 4 + remainder;
            
            ans += cnt * afterProcess;
        }

        cout << ans << endl;
	}
	
	return 0;
}
