#include <iostream>
#include <cstring>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    
    int n;
    while (cin >> n && n != -1) {
        int l, w, h, max = 0, min = 250;
        string bully, victim, name;

        while (n --) {
            cin >> l >> w >> h >> name;
            if (l*w*h > max) max = l*w*h, bully = name;
            if (l*w*h < min) min = l*w*h, victim = name;
        }

        cout << bully << " took clay from " << victim << "." << endl;
    }

    return 0;
}
