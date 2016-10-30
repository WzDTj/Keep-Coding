#include <iostream>

using namespace std;

void fixArray(int * array, const int len) {
    int temp;
    for (int i = len - 1; i > 0; --i) {
        if (array[i] > array[i - 1]) {
            temp = array[i];
            array[i] = array[i -1];
            array[i - 1] = temp;
        }
    }
}

int main(void)
{
    int n, k, temp;

    cin >> n >> k;

    int array[k];
    
    for (int i = 0; i < k; ++i) {
        array[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        cin >> temp;

        if (temp <= array[k - 1]) continue;
        else {
            array[k - 1] = temp;
            fixArray(array, k);
        } 
    }

    cout << array[k - 1] << endl;
    
    return 0;
}
