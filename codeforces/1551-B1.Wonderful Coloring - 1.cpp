// https://codeforces.com/problemset/problem/1551/B1
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
    string s;
    cin >> s;
    int freq[123]{};
    
    for (char &c: s) {
        freq[c]++;
    }
    
    int oneFreq{0}, k{0};
    for (int i{97}; i < 123; i++) {
        oneFreq += (freq[i] == 1);
        k += (freq[i] > 1);
    }
    printf("%d", k+(oneFreq/2));
}

int main() {
    lli t{1};
    scanf("%lld", &t);
    while (t--) { solve(); puts(""); }
    return 0;
}
