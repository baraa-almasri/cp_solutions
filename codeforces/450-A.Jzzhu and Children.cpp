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
    int n, m;
    scanf("%d %d", &n, &m);

    int *childern = new int[n];
    for (int i{0}; i < n; i++) {
        scanf("%d", &childern[i]);
    }

    int cnt{0};
    for (int i{0}; ; i = (i+1)%n) {
        if (childern[i] <= 0) {
            childern[i] = INT32_MAX;
            cnt++;
        }

        if (cnt == n) {
            printf("%d\n", i+1);
            return;
        }
        childern[i] -= m;
    }
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