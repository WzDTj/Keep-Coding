#include <iostream>

using namespace std;

int main(void)
{
    int n, x, y, answer;

    cin >> n >> x >> y;
    
    answer = n * x - y;
    
    if (answer < 0) answer = 0;

    cout << answer / x << endl;

    return 0;
}
