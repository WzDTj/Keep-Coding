#include <iostream>
#include <string>

using namespace std;

bool checkString(const string str);

int main() {
    int cnt = 0;

    cin >> cnt;

    string str;
    for (int i = 0; i < cnt; ++i) {
        cin >> str;
        if (checkString(str)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

bool checkString(const string str) {
    string temp = string(str);
    if (temp.size() < 3) return false ;
    else {
        int prefixCount = 0, mediumCount = 0, suffixCount = 0;
        bool findP = false, findT = false;
        string::iterator it = temp.begin();
        while (it != temp.end()) {
            if (!findP) {
                if (*it == 'P') findP = true;
                else if (*it == 'A') prefixCount ++;
                else return false;
            }
            else if (!findT) {
                if (*it == 'T') findT = true;
                else if (*it == 'A') mediumCount ++;
                else return false;
            }
            else if (findP && findT) {
                if (*it == 'A') suffixCount ++;
                else return false;
            }
            it ++;
        }
        if (!(findP && findT)) return false; 
        if (prefixCount * mediumCount != suffixCount) return false;
    }
    return true;
}
