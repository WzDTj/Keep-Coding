#include <iostream>

using namespace std;

int main() {
    const int BEGIN = 32;
    const int END = 705;

    int hexagonal;

    for (int i = BEGIN; i < END; ++i) {
        hexagonal = i*(2*i-1);
        if (hexagonal%400 == 0 || (hexagonal%4 == 0 && hexagonal%100)) cout << hexagonal << endl;
    }

    return 0;
}
