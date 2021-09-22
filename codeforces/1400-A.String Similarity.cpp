// https://codeforces.com/problemset/problem/1400/A
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
    string s;
    cin >> s;

    vector<string> sims(n);
    for (int i{0}; i < n; i++) {
        sims[i] = s.substr(i, n);
    }

    string sim{s.substr(0, n)};
    for (int i{0}; i < n; i++) {
        for (int j{0}; j < n; j++) {
            sim[i] = (char)(((sims[j][i] - 48) | (sim[i] - 48)) + 48);
        }
    }

    cout << sim;
}

int main() {
    lli t{1};
    scanf("%lld", &t);
    while (t--) { solve(); puts(""); }
    return 0;
}
