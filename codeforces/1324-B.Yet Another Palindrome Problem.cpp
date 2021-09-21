// https://codeforces.com/contest/1324/problem/B
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

    map<int, vector<int>> indices;
    bool found{false};
    for (int i{0}; i < n; i++) {
        scanf("%d", &a[i]);
        indices[a[i]].push_back(i);

        if (!found && indices[a[i]].size() >= 3) {
            found = true;
        }
    }

    if (found) {
        puts("YES");
        return;
    }

    for (auto &p: indices) {
        for (int i{0}; i < p.second.size()-1; i++) {
            if (abs(p.second[i] - p.second[i+1]) > 1) {
                puts("YES");
                return;
            }
        }
    }

    puts("NO");
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    
    lli t{1};
    scanf("%lld", &t);
    while (t--) solve();

    return 0;
}
