#include <iostream>

using namespace std;

int main() {
	int t, num, maximum = 0;
	cin >> t;

	while (t -- && cin >> num >> maximum) {
		int temp, sum = 0;
		while (num -- && cin >> temp) sum += temp;
		
		if (sum > maximum) cout << "Warning" << endl;
		else cout << "Safe" << endl;
	}
	
	return 0;
}


