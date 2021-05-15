// https://codeforces.com/problemset/problem/227/B
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

    map<llu, llu> indexes;
    llu a;
    for (llu i{0}; i < n; i++) {
        scanf("%llu", &a);
        indexes[a] = i;
    }

    llu m;
    scanf("%llu", &m);
    llu searchElement;
    llu vasya{0}, petya{0};

    while (m--) {
        scanf("%llu", &searchElement);
        vasya += (indexes[searchElement]+1);
        petya += n - (indexes[searchElement]);
    }
    printf("%llu %llu\n", vasya, petya);
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
