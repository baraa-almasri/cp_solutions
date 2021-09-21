// https://codeforces.com/problemset/problem/202/A
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
    char c{'\000'}, mx{'a'};
    int freq[123]{};
    
    while (scanf("%c", &c)) {
        if (c == ' ' || c == '\n' || c == '\r') { break; }
        mx = max(c, mx);
        freq[c]++;
    }

    while (freq[mx]--) {
        printf("%c", mx);
    }
    puts("");
}

int main() {
    lli t{1};
    // scanf("%lld", &t);
    while (t--) solve();

    return 0;
}
