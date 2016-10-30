#include <iostream>

using namespace std;

int main(void)
{
    int num;
    cin >> num;

    cout << num / 100 << endl;
    num %= 100;

    cout << num / 50 << endl;
    num %= 50;

    cout << num / 20 << endl;
    num %= 20;

    cout << num / 10 << endl;
    num %= 10;

    cout << num / 5 << endl;
    num %= 5;

    cout << num << endl;

    return 0;
}
