// https://codeforces.com/problemset/problem/731/A
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
    string name;
    cin >> name;

    int rot, rotates{0};

    for (int i{0}; i < name.length(); i++) {
        rot = abs((i == 0? name[0] - 'a': name[i-1] - name[i]));
        rotates += (rot > 13? 26-rot: rot);
    }

    printf("%d\n", rotates);
}

int main() {
    lli t{1};
    // scanf("%lld", &t);
    while (t--) solve();

    return 0;
}
