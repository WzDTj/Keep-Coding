#include <iostream>

using namespace std;

const char *pinyin[] = {
    "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" 
};
    
int main(void)
{
    char ch;
    int sum = 0;

    while (cin >> ch) {
        sum += (ch - '0');
    }

    int cnt = 0;
    int eachBit[100];

    while (sum) {
        eachBit[cnt] = sum % 10;
        sum /= 10;
        cnt ++;
    }
    
    cnt --;

    while (cnt) {
        cout << pinyin[eachBit[cnt]] << " ";
        cnt --;
    }

    cout << pinyin[eachBit[cnt]] << endl;

    return 0;
}
