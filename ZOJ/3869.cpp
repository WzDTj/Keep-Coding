#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	
	const int MAX_LENGTH = 10001;
	
	int t, n, box[MAX_LENGTH];
	cin >> t;
	while (t -- && cin >> n) {
		memset(box, 0, sizeof box);
		int ticket, aceOfAces, aceOfTickets = 0;
		bool flag = false;
		for (int i = 0; i < n; ++i) {
			cin >> ticket;
			++box[ticket];
		}
		for (int i = 0; i < MAX_LENGTH; ++i) {
			if (box[i] == aceOfTickets) flag = true;
			else if (box[i] > aceOfTickets) {
				aceOfAces = i;
				aceOfTickets = box[i];
				flag = false;
			}
		}
		
		if (flag) cout << "Nobody" << endl;
		else cout << aceOfAces << endl;
	}

	return 0;
}      
