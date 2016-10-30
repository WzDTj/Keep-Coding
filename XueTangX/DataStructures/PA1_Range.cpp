#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int compare(const void *a, const void *b);
int binSearchForLowerBound(int *, int , int, int);
int binSearchForUpperBound(int *, int , int, int);

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int points[n];
    for (int i = 0; i < n; ++i) scanf("%d", &points[i]);

    qsort(points, n, sizeof(int), compare);
    
    int a, b, lo, hi, count;
    while (m --) {
    scanf("%d %d", &a, &b);
        lo = binSearchForLowerBound(points, a, 0, n);
        hi = binSearchForUpperBound(points, b, 0, n);

        count = hi - lo - 1;
        printf("%d\n", count);
    }
    return 0;
}

int binSearchForLowerBound(int *points, int ele, int lo, int hi) {
    if (points[lo] == ele) return -1;
    while (lo < hi) {
        int mi = (lo + hi) >> 1;
        points[mi] < ele ? lo = mi + 1 : hi = mi;
    }
    return --lo;
}

int binSearchForUpperBound(int *points, int ele, int lo, int hi) {
    if (points[hi-1] == ele) return hi;
    while (hi > lo) {
        int mi = (lo + hi) >> 1;
        ele < points[mi] ? hi = mi : lo = mi + 1 ;
    }
    return lo;
}

int compare(const void *lhs, const void *rhs) {
    int *plhs = (int *) lhs;
    int *prhs = (int *) rhs;
    return (*plhs) - (*prhs);
}
