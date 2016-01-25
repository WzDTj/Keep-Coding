#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int num[n];
    for (int i = 0; i < n; ++i) {
        cin >> num[i]; 
    }

    int flag = 0;
    for (int i = n-m%n; i < n; ++i) {
        if (cnt ++) cout << " ";
        cout << num[i];
    }
    
    for (int i = 0; i < n-m%n; ++i) {
        if (cnt ++) cout << " ";
        cout << num[i];
    }

    return 0;
}
