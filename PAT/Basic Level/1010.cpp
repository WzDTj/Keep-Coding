#include <iostream>

using namespace std;

int main() {
    //x^n -> n*x^(n-1)
    int coefficient, power, flag = 0;
    while (cin >> coefficient >> power) {
        if (!power && !flag) {
            cout << "0 0";
            break;
        }
        else if (!power) continue;
        if (flag ++) cout << " ";
        cout << coefficient * power << " " << power-1;
    }

    return 0;
}
