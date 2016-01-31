#include <iostream>
#include <math.h>

using namespace std;

int main() {
    const int MAXLENGTH = 1000001; 
    
    bool d[MAXLENGTH];
    for (int i = 0; i < MAXLENGTH; ++i) {
        d[i] = true;
    }

    for (int i = 2; i < sqrt(MAXLENGTH); ++i) {
        for (int j = 2 * i; j < MAXLENGTH; j += i) {
            d[j] = false;
        } 
    }

    int count = 0, list[10001];
    for (int i = 2; i < MAXLENGTH; ++i) {
        if (d[i]) list[count ++] = i;
    }
    //output
    
    int m, n;
    cin >> m >> n;

    int flag = 1;
    for (int i = m-1; i < n; ++i) {
        cout << list[i];
        if (flag == 10 || i == n-1) {
            cout << endl;
            flag = 1;
        }
        else {
            cout << " ";
            ++flag;
        }
    }

    return 0;
}
