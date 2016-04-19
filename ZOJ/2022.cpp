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

/*
思路：
N!末尾0的个数等于N!能分解初多少个5；

计算出能分解出1个5的个数。
计算出能分解出2个5的个数。
以此类推，再将其相加，得出最后的答案。

规律:
5 10 15 20 25 -> 1 1 1 1 2
这组为能分解出1个5的次数，但是在25时，能分解出2个5。
因此也就得出规律，每5个数中，前4个分解出的5的个数是相同的
当以25为底时，也是一样的
25 50 75 100 125 -> 2 2 2 2 3
 */
