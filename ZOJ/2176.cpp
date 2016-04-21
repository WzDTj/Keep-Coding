#include <iostream>

using namespace std;

int main () {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	
	int n, speed, totalElapsedTime;
	while (cin >> n && n != -1) {
		int miles = 0, preTotalElapsedTime = 0;
		for (int i = 0; i < n; ++i) {
			cin >> speed >> totalElapsedTime;
			miles += (speed * (totalElapsedTime - preTotalElapsedTime));
			preTotalElapsedTime = totalElapsedTime;
		}
		cout << miles << " miles" << endl;
	}


	return 0;
}
