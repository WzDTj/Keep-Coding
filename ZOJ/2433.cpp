#include <iostream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	const int MAX_LENGTH = (1<<30);

	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;

        int city[n], minPosition = -1, minLength = MAX_LENGTH;
        city[0] = 0;
        for (int i = 1; i < n; ++i) {
            cin >> city[i];
            if (i>1 && i<n-1 && minLength > city[i]-city[i-1]) {
                minLength = city[i]-city[i-1];
                minPosition = i;
            }
        }
	
		if (minPosition == -1) cout << "0" << endl;
		else cout << city[n-1]+minLength << endl << minPosition+1 << " 1 " << n << " " << minPosition << endl; 
        if (t) cout << endl;
	}
	
	return 0;
}
