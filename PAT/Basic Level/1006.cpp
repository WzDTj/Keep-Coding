#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;
    for (int i = 0; i < num / 100; ++i) cout << "B";
    
    num %= 100;
    for (int i = 0; i < num / 10; ++i) cout << "S";

    num %= 10;
    for (int i = 0; i < num; ++i) cout << i + 1;

    cout << endl;

    return 0;
}
