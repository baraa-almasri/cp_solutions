// problem link
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

    int freq[123]{};
    string s;
    for (int i{0}; i < n; i++) {
        cin >> s;
        for (char &c: s) {
            freq[c]++;
        }
    }

    for (int i{97}; i < 123; i++) {
        if (freq[i] % n != 0) {
            puts("NO");
            return;
        }
    }

    puts(( "YES"));
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    
    lli t{1};
    scanf("%lld", &t);
    while (t--) solve();

    return 0;
}
