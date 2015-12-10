#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int studentOfNumber;
	
	cin >> studentOfNumber;
	
	string highestId, curId, lowestId;
	string highestName, curName, lowestName;
	int highestScore = 0, curScore = 0, lowestScore = 101;	
	for (int i = 0; i < studentOfNumber; ++i) {
		cin >> curName >> curId >> curScore;

		if (curScore > highestScore) {
			highestName.assign(curName);
			highestId.assign(curId);
			highestScore = curScore;
		}
		if (curScore < lowestScore) {
			lowestName.assign(curName);
			lowestId.assign(curId);
			lowestScore = curScore;
		}
	}

	cout << highestName << " " << highestId << endl;
	cout << lowestName << " " << lowestId << endl;
		
	return 0;
}
