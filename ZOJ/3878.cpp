#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif

	string qwerty = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?\n ";
	string dvorak = "`1234567890[]',.pyfgcrl/=\\aoeuidhtns-;qjkxbmwvz~!@#$%^&*(){}\"<>PYFGCRL?+|AOEUIDHTNS_:QJKXBMWVZ\n ";
	
	int strLength = qwerty.length();
	map<char, char> convert;
	
	pair<char, char> temp;
	for (int i = 0; i < strLength; ++ i) {
		temp.first = qwerty[i];
		temp.second = dvorak[i];
		convert.insert(temp);
	}
	
	char ch;
	while ((ch = getchar()) != EOF)
		printf("%c", convert[ch]);
		
	return 0;
}      
