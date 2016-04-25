#include <iostream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif

	const char people[6][6] = {
		{'O', '/', '|', '\\', '(', ')'}, 
		{'/', 'O', '|', '\\', '(', ')'},
		{'|', 'O', '/', '\\', '(', ')'},
		{'\\', 'O', '/', '|', '(', ')'},
		{'(', 'O', '/', '|', '\\', ')'},
		{')', 'O', '/', '|', '\\', '('}};
		
	const int dir[6][5][2] = {
		{{+1, -1}, {+1, +0}, {+1, +1}, {+2, -1}, {+2, +1}}, 
		{{-1, +1}, {+0, +1}, {+0, +2}, {+1, +0}, {+1, +2}},
		{{-1, +0}, {+0, -1}, {+0, +1}, {+1, -1}, {+1, +1}},
		{{-1, -1}, {+0, -2}, {+0, -1}, {+1, -2}, {+1, +0}},
		{{-2, +1}, {-1, +0}, {-1, +1}, {-1, +2}, {+0, +2}},
		{{-2, -1}, {-1, -2}, {-1, -1}, {-1, +0}, {+0, -2}}};
	int t;
	cin >> t;
	while (t --) {
		int h, w, ans = 0;
		cin >> h >> w;
		char photo[h][w];
		for (int i = 0; i < h; ++i)
			for (int j = 0; j < w; ++j)
				cin >> photo[i][j];
		
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				if(photo[i][j] == '.') continue;
				else {
					ans ++;
					int cnt = 0;
					while (photo[i][j] != people[cnt][0]) ++cnt;
					
					for (int k = 1; k < 6; ++k) {
						if ((i+dir[cnt][k-1][0]>=0 && i+dir[cnt][k-1][0]<h) && 
						(j+dir[cnt][k-1][1]>= 0 && j+dir[cnt][k-1][1]< w) && 
						photo[i+dir[cnt][k-1][0]][j+dir[cnt][k-1][1]] == people[cnt][k])
							photo[i+dir[cnt][k-1][0]][j+dir[cnt][k-1][1]] = '.';
					}	
				}
			}
		}
		
		cout << ans << endl;
	}

	return 0;
}
