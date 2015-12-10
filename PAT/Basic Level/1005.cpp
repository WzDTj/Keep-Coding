#include <iostream>
#include <algorithm>

bool compare (int a, int b);
void calCallatz(int *list,const int num);

using namespace std;

int main() {
    int list[101];
    
    //init list.    
    for (int i = 0; i < 101; ++i) {
        list[i] = 0;
    }
    
    int cnt;
    cin >> cnt;
    
    int num[cnt];
    for (int i = 0; i < cnt; ++i) {
        cin >> num[i];
        calCallatz(list, num[i]);
    }

    sort(num, num + cnt, compare);

    int keyCount = 0;
    for (int i = 0; i < cnt; ++i) {
        if (!list[num[i]]) {
            if (keyCount) cout << " ";
            cout << num[i];
            keyCount ++;
        }
    }

    cout << endl;

    return 0;
}

bool compare(int a, int b) {
    return a > b;
}

void calCallatz(int *list,const int num) {
    if(list[num]) return;

    int temp = num;
    while (temp != 1 && !list[temp]) {
        list[temp] = 1;
        //insuran range of temp
        do {
            if (temp % 2) temp = (3 * temp + 1) / 2;
            else temp /= 2;
        } while(temp > 100);
    }
   list[num] = 0;
}
