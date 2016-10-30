#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a = 0, e = 0, i = 0, o = 0, u = 0, cnt = 0;
    char str[81];

    cin.getline(str, 80);
    while(str[cnt] != '\0') {
        if(str[cnt] == 'a') ++a;
        else  if(str[cnt] == 'e') ++e;
        else  if(str[cnt] == 'i') ++i;
        else  if(str[cnt] == 'o') ++o;
        else  if(str[cnt] == 'u') ++u;

        ++cnt;
    }
    
    cout << a << " " << e << " " << i << " " << o << " " << u << endl;

    return 0;
}
