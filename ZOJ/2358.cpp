#include <iostream>

using namespace std;

const int LENGTH = 10;

int yesOrNo (const int *list, int *flags, int index, int num, int sum);
int main() {
    
    int list[LENGTH];
    int flags[LENGTH];
    list[0] = 1;
    
    for (int i = 1; i < LENGTH; ++i) list[i] = list[i-1] * i;
    
    int n;
    while (cin >> n && n >= 0) {
        for (int i = 0; i < LENGTH; ++i) flags[i] = 1;
        if (yesOrNo(list, flags, 0, n, 0) == -1 || n == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}

int yesOrNo (const int *list, int *flags, int index, int num, int sum) {
    if (sum == num) return -2;
    if (sum < num) {
        for (int i = index; i < LENGTH; ++i) {
            if (flags[i] && num - sum >= list[i]) {
                flags[i] = 0;
                if(yesOrNo(list, flags, i+1, num, sum+list[i]) != -1) return -2;
                flags[i] = 1;
            }
        }
    }
    return -1;
}
