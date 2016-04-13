#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	string originalCity, distanceCity, classCode;
	int actualMiles, aCMPerkMiles = 0;
	
	while (cin >> originalCity) {
		if (originalCity == "#") break;
		else if (originalCity == "0") {
			cout << aCMPerkMiles << endl; 
			aCMPerkMiles = 0;
		}
		else {
			cin >> distanceCity >> actualMiles >> classCode;
			if (classCode == "F") aCMPerkMiles += (2*actualMiles);
			else if (classCode == "B") aCMPerkMiles += (1.5*actualMiles);
			else if (classCode == "Y") aCMPerkMiles += max(500, actualMiles);
		}		
	}
	
	return 0;
}
