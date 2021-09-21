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

    vector<pair<int, int>> indices; // {value, index}
    int freq[5001]{};
    bool found{false};

    for (int i{0}; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
        indices.push_back({a[i], i+1});

        if (!found && freq[a[i]] >= 3) {
            found = true;
        }
    }

    if (found) {
        puts("YES");
        return;
    }

    map<int, int> lastIndex;
    
    for (auto &p: indices) {
        if (lastIndex[p.first] == 0) {
            lastIndex[p.first] = p.second;
        }

        if (abs(lastIndex[p.first] - p.second) > 1) {
            puts("YES");
            return;
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
