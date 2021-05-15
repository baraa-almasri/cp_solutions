// https://codeforces.com/contest/1374/problem/B 
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <utility>
#include <new>
#include <functional>
#include <set>
#include <queue>
#include <stack>

typedef long long lli;
typedef unsigned long long llu;
#define all(v) v.begin(), v.end()
#define allArr(a,n) a, a+n
using namespace std;

//#define DEBUG_BLYAT

/*
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 */

void solve() {
    llu n;
    scanf("%llu", &n);

    int steps{0};
    while (n > 1) {
        if ((n * 2) % 6 != 0) {
            puts("-1");
            return;
        }
        n = (n % 6ULL == 0)? n/6ULL: n*2ULL;
        steps++;
        if (n == 1) { break; }
    }
    printf("%d\n", steps);    
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    ios::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);

    int t{1};
    scanf("%d", &t);
    while (t--) {
        solve();
    }

    return 0;
}