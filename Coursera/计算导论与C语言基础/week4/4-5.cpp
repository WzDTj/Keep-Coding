#include <iostream>

using namespace std;

int main(void)
{
    int num, cnt = 3;
    int restore[3];
    cin >> num;

    while (num) {
        restore[-- cnt] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < 3; ++i) {
        cout << restore[i] << endl; 
    }

    return 0;
}
