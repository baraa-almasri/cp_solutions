// https://codeforces.com/contest/1360/problem/B
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <utility>
#include <new>
#include <functional>
#include <set>
#include <queue>
#include <stack>
#include <limits>

typedef long long lli;
#define all(v) v.begin(), v.end()
#define allArr(a,n) a, a+n
using namespace std;

//#define DEBUG_BLYAT

/*
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 */

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    int t;
    scanf("%d", &t);

    int n, minDiff{INT32_MAX};
    int *a;

    while (t--) {
        scanf("%d", &n);
        a = new int[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        sort(allArr(a, n), [](int i, int j){ return i < j; });

        for (int i = 1; i < n; i ++) {
            minDiff = min(a[i] - a[i-1], minDiff);
        }

        printf("%d\n", minDiff);

        minDiff = INT32_MAX;
        delete a;
    }

    return 0;
}