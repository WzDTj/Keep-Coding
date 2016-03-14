#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int w, d, cnt = 1;
    while (cin >> w >> d && w != 0 && d != 0) {
        double t = 5730 * log(810 * w / (double)d) / log(2);

        cout << "Sample #" << cnt++ << endl;
        cout << "The approximate age is ";
        if (t < 10000) cout << round(t/100) * 100;
        else cout << round(t/1000) * 1000;
        cout << " years.\n\n";
    }

    return 0;
}
