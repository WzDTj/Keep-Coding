#include <iostream>
#include <iomanip>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    const double PI = 3.1415927;
    const int INCHESTOMILES = 63360;
    const int MINUTESTOHOURS = 3600;
    
    int revolutions, cnt = 1;
    double diameter, time, totalDistance, milesPerHours;

    while (cin >> diameter >> revolutions >> time && revolutions) {
        totalDistance = diameter * PI * revolutions / INCHESTOMILES;
        milesPerHours = totalDistance * MINUTESTOHOURS / time;
        cout << setiosflags(ios::fixed) << setprecision(2) << "Trip #" << cnt ++ << ": " << totalDistance << " " << milesPerHours << endl;
    }

    return 0;
}
