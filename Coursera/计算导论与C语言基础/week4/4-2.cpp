#include <iostream>

using namespace std;

const double PI = 3.14159;
const int BUCK = 20;

int main(void)
{
    int h, r, answer;
    double v = 0.00;

    cin >> h >> r;

    v = PI * r * r * h / 1000;

    answer = BUCK / v;

    if (answer * v < BUCK) answer ++;

    cout << answer << endl;

    return 0;
}
