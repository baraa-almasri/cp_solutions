// https://codeforces.com/problemset/problem/1480/A
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

    for (int i{0}; i < s.length(); i++) {
        printf("%c", 
            (i % 2 == 0? 
            (s[i] == 'a'? 'b': 'a'): 
            (s[i] == 'z'? 'y': 'z'))
        );
    }
}

int main() {
    lli t{1};
    scanf("%lld", &t);
    while (t--) { solve(); puts(""); }
    return 0;
}
