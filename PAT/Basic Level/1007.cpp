#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    bool d[n+1];
    for (int i = 0; i < n+1; ++i) {
        d[i] = true;
    }

    for (int i = 2; i < sqrt(n+1); ++i) {
        for (int j = 2 * i; j < n+1; j += i) {
            d[j] = false;
        } 
    }

    int count = 0;
    for (int i = 2; i < n - 1; ++i) {
        if (d[i] && !d[i+1] && d[i+2]) count ++;
    }

    cout << count << endl; 

    return 0;
}
