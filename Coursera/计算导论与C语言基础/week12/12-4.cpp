#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int lhs, rhs;
    char op;
    while (cin >> lhs >> rhs >> op) {
        switch (op) {
            case '+':
                cout << lhs+rhs << endl;
                break;
            case '-':
                cout << lhs-rhs << endl;
                break;
            case '*':
                cout << lhs*rhs << endl;
                break;
            case '/':
                if (rhs) cout << lhs/rhs << endl;
                else cout << "Divided by zero!" << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }
    }

    return 0;
}
