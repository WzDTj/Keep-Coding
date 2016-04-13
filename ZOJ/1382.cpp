#include <iostream>

using namespace std;

int main() {
	const int list[21] = {
		1, 2, 4, 8,
		16, 32, 64, 128, 
		256, 512, 1024, 2048, 
		4096, 8192, 16384, 32768, 
		65536, 131072, 262144, 524288, 
		1048576};
	const int LENGTH = 1000001;

	int t, n, comp;
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 1; i < LENGTH; i += 2) {
			if (n%i) continue;
			else {
				comp = n/i;
				for (int j = 0; j < 21; j++) {
					if (comp < list[j]) break;
					else if (comp == list[j]) {
						cout << i << " " << j << endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}
