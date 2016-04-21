#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    const string list[3] = {
        "Wide Receiver", 
        "Lineman", 
        "Quarterback"
    };

    double speed;
    int weight, strength;
    while (cin >> speed >> weight >> strength && (speed || weight || strength)) {
        bool flags = false, position[3];


        position[0] = (speed <= 4.5 && weight >= 150 && strength >= 200);
        position[1] = (speed <= 6.0 && weight >= 300 && strength >= 500);
        position[2] = (speed <= 5.0 && weight >= 200 && strength >= 300);

        for (int i = 0; i < 3; ++i) {
            if (position[i]) {
                if (flags) cout << " ";
                else flags = !flags;

                cout << list[i];   
            }
        }

        if (flags) cout << endl;
        else cout << "No positions" << endl;
    }

    return 0;
}
