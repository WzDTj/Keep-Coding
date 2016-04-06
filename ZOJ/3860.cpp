#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t --) {
        int n, first = -1, second = -1, temp;
        cin >> n;

        int flag = 0;
        while (n -- && cin >> temp) {
            if(flag) continue;

            if (first == -1) first = temp;
            else if (second == -1) second = temp;
            else {
                if (first == second && second == temp) continue;
                else if (first == temp) cout << second << endl;
                else if (second == temp) cout << first << endl;
                else cout << temp << endl;
                flag = 1;
            }
        }
    }
    return 0;
}
