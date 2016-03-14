#include <iostream>

using namespace std;

void permutationToInvasion(const int *permutation, const int len);
void invasionToPermutaion(const int *invasion, const int len);

int main() {
    int n;
    while (cin >> n && n != 0) {
        char ch;
        cin >> ch;

        int table[n];
        for (int i = 0; i < n; ++i) cin >> table[i];

        if (ch == 'P') permutationToInvasion(table, n);
        else if (ch == 'I') invasionToPermutaion(table, n);
    }
    
    return 0;
}
void permutationToInvasion(const int *permutation, const int len) {
    int invasion[len];
    for (int i = 0; i < len; ++i) {
        int count = 0;
        for (int j = 0; j < i; ++j) if (permutation[j] > permutation[i]) ++count;
        invasion[permutation[i]-1] = count;
    }
    
    for (int i = 0; i < len; ++i) {
        cout << invasion[i];
        i == len-1 ? cout << endl : cout << " ";
    }
}

void invasionToPermutaion(const int *invasion, const int len) {
    int permutation[len];
    for (int i = 0; i < len; ++i) permutation[i] = 99999;

    for (int i = 0; i < len; ++i) {
        int count = 0;
        int curPosition = 0;
        while (count < invasion[i] || permutation[curPosition] != 99999) {
            if (permutation[curPosition] == 99999) ++count;
            ++curPosition;
        }
        permutation[curPosition] = i+1;
    }

    for (int i = 0; i < len; ++i) {
        cout << permutation[i];
        i == len-1 ? cout << endl : cout << " ";
    }
}
