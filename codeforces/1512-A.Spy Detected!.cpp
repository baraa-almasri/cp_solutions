// https://codeforces.com/problemset/problem/1512/A
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
    #include "../gulag/cp_debug.h"
#endif
using namespace std;

typedef long long lli;
typedef unsigned long long llu;
#define all(v) v.begin(), v.end()
#define allArr(a,n) a, a+n
#define watch(x) cout << #x <<" = " << x << '\n';

/*
 * [[[[[[[[[[[[[[[[hello]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[darkness]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[my]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[old]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[friend]]]]]]]]]]]]]]]]
 */

inline void solve() {
    int n;
    scanf("%d", &n);
    int *a = new int[n];
    int freq[101]{};
    int spy;
    for (int i{0}; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }
    for (int i{0}; i < n; i++) {
        if (freq[a[i]] == 1) { spy = i; }
    }

    printf("%d\n", spy+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    lli t{1};
    scanf("%lld", &t);
    while (t--) solve();

    return 0;
}
