#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	
	int n;
	cin >> n;
	while (n --) {
		int lengthOfPole, theNumberOfAnt, ant, earliest = 0, latest = 0;

		cin >> lengthOfPole >> theNumberOfAnt;
		
		for (int i = 0; i < theNumberOfAnt; ++i) {
			cin >> ant; 
			earliest = max(earliest, min(ant, lengthOfPole-ant));
			latest = max(latest, max(ant, lengthOfPole-ant));
		}		
		cout << earliest << " " << latest << endl;
		
	}

	return 0;
}
//----------
// 2   67
//  2 67----
//   27-----   
//   67  
//  2 67----
// 2 6  7---
//2 6    7--
// 6      7-
//6        7
//          
