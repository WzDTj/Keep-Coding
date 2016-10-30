#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int year;

    while (cin >> year) {
        if ((year%400 == 0) || (year%4 == 0 && year%100 != 0)) cout << "Y" << endl;
        else cout << "N" << endl;
    }

    return 0;
}
