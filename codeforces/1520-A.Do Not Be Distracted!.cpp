// https://codeforces.com/problemset/problem/1520/A
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
    string tasks;
    cin >> tasks;
    int freqs[123]{};

    for (int i{0}; i < n; i++) {
        freqs[tasks[i]]++;
        if (i > 0 && freqs[tasks[i]] > 1 && tasks[i-1] != tasks[i]) {
            puts("NO");
            return;
        }
    }
    puts("YES");
}

int main() {
    lli t{1};
    scanf("%lld", &t);
    while (t--) solve();

    return 0;
}
