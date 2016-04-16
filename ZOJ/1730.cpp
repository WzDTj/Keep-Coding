#include <iostream>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    
    int t;
    cin >> t;
    while (t --) {
        int n, minutes = 0;
        cin >> n;
        minutes = (n/2)*(n/2-1)/2 + ((n+1)/2)*((n+1)/2-1)/2;
        cout << minutes << endl;
    }

    return 0;
}
