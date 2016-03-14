#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "# Cards  Overhang" << endl;

    while(cin >> n) {
        double sum = 0.0;
        for (int i = 0; i < n; ++i) {
            sum += 1.0/(2*(i+1));
        }
        cout << setw(5) << n << setw(10) << setiosflags(ios::fixed) << setprecision(3) << sum << endl;
    }

    return 0;
}

