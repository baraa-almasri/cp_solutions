// http://codeforces.com/problemset/problem/218/B
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

typedef long long lli;
typedef unsigned long long llu;
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

int sumTillOne(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumTillOne(n-1);
}

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);

    int *a = new int[m];
    int *copy = new int[m];
    for(int i{0}; i < m; i++) {
        scanf("%d", &a[i]);
        copy[i] = a[i];
    }

    sort(allArr(a, m), [](int i, int j) { return i > j; });
    for (int i{0}; i < m; i++) {
        copy[i] = a[m-i-1];
    }
    int minZ{0}, maxZ{0};
    int minP{n}, maxP{n};

    for (int i{0}; i < m && minP > 0; i = (i+1)%m) {
        if (copy[i] > 0) {
            minP--;
            minZ += copy[i];
            copy[i]--;
        }

        if (copy[i] > 0) {
            i--;
            continue;
        }
    }

    int cnt{0};
    for (int i{0}; i < m && maxP > 0; i = (i+1)%m, cnt++) {
        if (cnt >= 3) {
            sort(allArr(a, m), [](int i, int j) { return i > j; });
            i = cnt = 0;
        }
        if (a[i] > 0) {
            maxP--;
            maxZ += a[i];
            a[i]--;
        }

        if (i < m-1 && a[i] >= a[i+1]) {
            i -= (i-1 > 0? 2: 1);
            continue;
        }
    }
    printf("%d %d\n", maxZ, minZ);
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    ios::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);

    int t{1};
    // scanf("%d", &t);
    while (t--) {
        solve();
    }

    return 0;
}