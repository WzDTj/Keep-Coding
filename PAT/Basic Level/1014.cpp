#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string date[7] = {
        "MON", "TUE", "WED", 
        "THU", "FRI", "SAT", "SUN" 
    };
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3 >> str4;

    string::iterator it1 = str1.begin();
    string::iterator it2 = str2.begin();
    bool date_flag = false;
    while (it1 !=  str1.end() && it2 != str2.end()) {
        if (!date_flag && *it1 == *it2 && *it1 >= 65 && *it1 <= 71) {
            cout << date[*it1 - 'A'] << " ";
            date_flag = true;
        }
        else if (date_flag && *it1 == *it2) {
            if (*it1 >= '0' && *it1 <= '9') {
                cout << setfill('0') << setw(2) << *it1 - '0'<< ":";
                break;
            }
            else if (*it1 >= 'A' && *it1 <= 'N') {
                cout << setfill('0') << setw(2) << (*it1) - 'A' + 10 << ":"; 
                break;
            }
        }
        ++it1, ++it2;
    }

    string::iterator it3 = str3.begin();
    string::iterator it4 = str4.begin();
    int record_position = 0;
    while (it3 != str3.end() && it4 != str4.end()) {
        if (*it3 ==  *it4) {
            if ((*it3 >= 'a' && *it3 <= 'z') || (*it3 >= 'A' && *it3 <= 'Z')) {
                cout << setfill('0') << setw(2) << record_position << endl;
            }
        }
        ++it3, ++it4, ++record_position;
    }
    return 0;
}
