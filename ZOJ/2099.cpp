#include <iostream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	
	int x, y, southWest[2], northEast[2];

	while (cin >> x >> y && (x||y)) {
		southWest[0] = x; southWest[1] = y;
		northEast[0] = x; northEast[1] = y;
		
		while (cin >> x >> y && (x||y)) {
			if (x < southWest[0]) southWest[0] = x;
			if (x > northEast[0]) northEast[0] = x;
			if (y < southWest[1]) southWest[1] = y;
			if (y > northEast[1]) northEast[1] = y;		
		}
	
		cout << southWest[0] << " " << southWest[1] << " " << northEast[0] << " " << northEast[1] << endl;
	}

	return 0; 
}

