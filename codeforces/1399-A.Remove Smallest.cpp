// https://codeforces.com/problemset/problem/1399/A 
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
    int n, *a;
    int diff{0};
    outer:
    while (t--) {
        scanf("%d", &n);
        a = new int[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        sort(allArr(a, n), [](int i, int j){return i < j;});
        for (int i = 1; i < n; i++) {
            diff = a[i] - a[i-1];
            if (diff > 1) {
                puts("NO");
                goto outer;
            }
        }
        puts("YES");
    }

    return 0;
}