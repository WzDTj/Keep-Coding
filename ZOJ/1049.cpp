#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const float PI = 3.1415926;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        float x, y;
        scanf("%f %f", &x, &y);

        float r = sqrt(x*x + y*y);
        float area = PI * r * r / 2;
        int years = ceil(area / 50);

        printf("Property %d: This property will begin eroding in year %d.\n", i+1, years);
    }

    printf("END OF OUTPUT.\n");

    return 0;
}
