#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif

	int t, n;
	cin >> t;
	while (t -- && cin >> n) {
		int level = 0, team;
		while (n --) {
			cin >> team;
			if (team > 6000) level++;
		}
		cout << level << endl;
	}

	return 0;
}      
