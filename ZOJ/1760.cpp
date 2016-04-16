#include <iostream>
#include <cstring>

using namespace std;

int main() {
    freopen("in.txt", "r", stdin);
    
    const int MAX_LENGTH = 100;

    int temp;
    bool list[MAX_LENGTH];

    memset(list, 0, sizeof list);
    while (cin >> temp && temp != -1) {
        if (temp == 0) {
            int cnt = 0;
            for (int i = 0; i < MAX_LENGTH/2; ++i) 
                if (list[i] && list[2*i]) cnt ++;
                
            cout << cnt << endl;
            memset(list, 0, sizeof list);
        }
        else list[temp] = true;
    }

    return 0;
}
