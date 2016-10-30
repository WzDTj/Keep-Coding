#include <iostream>

using namespace std;

int main()
{
    int days;
    
    cin >> days;

    if (days == 1 || days == 3 || days == 5) cout << "NO" << endl;
    else  cout << "YES" << endl;

    return 0;
}
