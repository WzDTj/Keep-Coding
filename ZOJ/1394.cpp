#include <iostream>
#include <cstring>

using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    
    const double PI = 3.14159;
    string data;

    while (cin >> data && data != "ENDOFINPUT") {
        int x, y, z;
        double lengthOfSide, needGasoline;
        cin >> x >> y >> z >> data;
        
        if (z > 180) z = 360 - z;

        lengthOfSide = x*z*PI/180;
        needGasoline = 2 * lengthOfSide / 5;

        if (needGasoline <= y) cout << "YES " << (int)(y-needGasoline) << endl;
        else cout << "NO " << y*5 << endl;
    }

    return 0;
}
