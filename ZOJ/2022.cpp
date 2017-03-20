#include <iostream>
#include <cstdio>

int main () {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
	
	long t, n;
    scanf("%ld", &t);
	while (t -- && scanf("%ld", &n)) {
        long sum = 0;
        while (n) {
            sum += n / 5;
            n /= 5;
        }

        printf("%ld\n", sum);
	}
	
	return 0;
}
