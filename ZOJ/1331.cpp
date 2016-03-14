#include <iostream>

using namespace std;

int main() {
    const int LENGTH = 201;

    int list[LENGTH];
    for (int i = 0; i < LENGTH; ++i) list[i] = i * i * i;

    for (int i = 6; i < LENGTH; ++i) {
        for (int j = 2; j < i; ++j) {
            if (list[i] < list[j]) break;
            for (int k = j+1; k < i; ++k) {
                if (list[i] < list[j] + list[k]) break;
                for (int l = k+1; k < i; ++l) {
                    if (list[i] < list[j] + list[k] + list[l]) break;
                    if (list[i] == list[j] + list[k] + list[l]) cout << "Cubo = " << i << ", Triple = (" << j << "," << k << "," << l << ")" << endl;
                }
            }
        }
    }

    return 0;
}
