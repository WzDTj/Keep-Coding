#include <iostream>
#include <cmath>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    
    int n, u, d;
    while (cin >> n >> u >> d && n+u+d > 0) 
        cout << 2 * (int)ceil((double)(n-d)/(u-d)) - 1 << endl;

    return 0;
}
