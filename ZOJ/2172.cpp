#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	
	int n, cases = 0;
	while (cin >> n && n) {
		vector<string> list;
		string str;
		for (int i = 0; i < n; ++ i) {
			cin >> str;
			list.push_back(str);
		}
		
		cout << "SET " << ++cases << endl;
		for (int i = 0; i < n; i += 2) 
			cout << list[i] << endl;  
		for (int i = n/2*2 -1; i > 0; i -= 2)
			cout << list[i] << endl;
	}

	return 0;
}
