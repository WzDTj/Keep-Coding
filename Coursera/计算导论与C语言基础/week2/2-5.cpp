#include <iostream>

using namespace std;

int main(void)
{
    int cnt;
    cin >> cnt;
    
    int num[cnt];
    for (int i = 0; i < cnt; i ++) {
        cin >> num[i]; 
    }
    for (int i = cnt - 1; i >= 0; i --) {
        cout << num[i] << " "; 
    }
    return 0;
}
