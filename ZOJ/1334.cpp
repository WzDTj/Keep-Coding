#include <iostream>
#include <iomanip>
#include <string>
#include <stack>
#include <math.h>

using namespace std;

const char list[16] = {
    '0', '1', '2', '3', 
    '4', '5', '6', '7', 
    '8', '9', 'A', 'B', 
    'C', 'D', 'E', 'F'};

int baseXTobase10(string num, int base);
string base10ToBaseX(int num, int base);

int main() {
    string num;
    int raw, converted;
    while (cin >> num >> raw >> converted) {
        int dex = baseXTobase10(num, raw);
        string result = base10ToBaseX(dex, converted);
        if (result.length() > 7) cout << setw(7) << "ERROR" << endl;
        else cout << setw(7) << result << endl;
    }

    return 0;
}

int baseXTobase10(string num, int base) {
    int result = 0;
    int length = num.length();
    string::iterator it = num.begin();

    while (it != num.end()) {
        int temp = 0;
        if (*it >= '0' && *it <= '9') temp = *it -'0';
        else if (*it >= 'A' && *it <= 'Z') temp = *it -'A' + 10;
        result += (temp * pow(base, --length));
        ++it;
    }

    return result;
}

string base10ToBaseX(int num, int base) {
    stack<int> temp;
    while (num > 0) {
        temp.push(num%base);
        num /= base;
    }

    string result;
    while (!temp.empty()) {
        result.push_back(list[temp.top()]);
        temp.pop();
    }
    
    return result;
}

