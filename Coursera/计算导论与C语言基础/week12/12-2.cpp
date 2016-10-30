#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int num;
    while (cin >> num) {
        bool flag = false;
        if (num%3 == 0) {
            if (flag) cout << " ";
            cout << "3";
            flag = true;
        }
        if (num%5 == 0) {
            if (flag) cout << " ";
            cout << "5";
            flag = true;
        }
        if (num%7 == 0) {
            if (flag) cout << " ";
            cout << "7";
            flag = true;
        }
        if (flag) cout << endl;
        else cout << "n" << endl;
    }

    return 0;
}
