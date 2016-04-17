#include <iostream>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int wA, wB, wC, wD, lA, lB, lC, lD;

    while (cin >> wA >> lA >> wB >> lB >> wC >> lC && wA+lA+wB+lB+wC+lC) {
        wD = 2 * lA + wA - wB - wC;
        lD = wA + lA - wD;
        cout << "Anna's won-loss record is " << wD << "-" << lD << "." << endl;
    }

    return 0;
}
