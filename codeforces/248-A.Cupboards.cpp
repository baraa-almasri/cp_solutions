// https://codeforces.com/problemset/problem/248/A
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
    int n;
    scanf("%d", &n);

    pair<int, int> left(0, 0);
    pair<int, int> right(0, 0);

    int tmp, tmp2;
    while (n--) {
        scanf("%d %d", &tmp, &tmp2);
        left.first += (tmp == 0);
        left.second += (tmp == 1);
        
        right.first += (tmp2 == 0);
        right.second += (tmp2 == 1);
    }
    printf("%d\n", min(left.first, left.second) + min(right.first, right.second));
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    ios::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);

    int t{1};
    // scanf("%d", &t);
    while (t--) {
        solve();
    }

    return 0;
}
