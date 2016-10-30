#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char str1[81], str2[81];
    while (cin.getline(str1, 80) && cin.getline(str2, 80)) {
        int flag = 9999;

        int cnt = 0;
        while (str1[cnt] != '\0') {
            if (str1[cnt] > 90) str1[cnt] -= 32;
            ++cnt;
        }

        cnt = 0;
        while (str2[cnt] != '\0') {
            if (str2[cnt] > 90) str2[cnt] -= 32;
            ++cnt;
        }

        cnt = 0;
        while (str1[cnt] != '\0' && str2[cnt] != '\0') {
            if (str1[cnt] < str2[cnt]) {
                flag = -1;
                break;
            }
            else if (str1[cnt] > str2[cnt]) {
                flag = 1;
                break;
            }
            cnt ++;
        }

        if (flag == 9999) {
            if (str1[cnt] == '\0' && str2[cnt] == '\0') flag = 0;
            else if (str1[cnt] == '\0') flag = -1;
            else if (str2[cnt] == '\0') flag = 1;
        }

        if (flag == 0) cout << "=" << endl;
        else if (flag == -1) cout << "<" << endl;
        else if (flag == 1) cout << ">" << endl;
    }



    return 0;
}
