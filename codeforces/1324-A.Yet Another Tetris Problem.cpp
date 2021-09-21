// https://codeforces.com/contest/1324/problem/A
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
    vector<int> a(n);
    int mx{INT32_MIN};

    for (int &i: a) {
        scanf("%d", &i);
        if (i > mx) {
            mx = i;
        }
    }

    for (int i: a) {
        if ((mx - i) % 2 == 1) { // watch out for operators precidense kids :)
            puts("NO");
            return;
        }
    }
    puts("YES");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    lli t{1};
    scanf("%lld", &t);
    while (t--) solve();

    return 0;
}
