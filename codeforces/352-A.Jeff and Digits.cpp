// https://codeforces.com/problemset/problem/352/A
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
    unsigned n;
    scanf("%u", &n);
    unsigned *digits = new unsigned[n];
    for_each(allArr(digits, n), [](unsigned &i){scanf("%u", &i);});

    unsigned _5s{0}, _0s{0};
    for_each(allArr(digits, n), [&_0s, &_5s](unsigned i) {
        _5s += (i == 5);
        _0s += (i == 0);
    });

    while (_5s % 9 != 0) {
        _5s--;
    }
    if (_5s % 9 == 0 && _5s > 0 && _0s > 0) {
        while (_5s--) {
            printf("5");
        }
        while (_0s--) {
            printf("0");
        }
    } else if (_5s <= 0 && _0s > 0) {
        printf("0");
    } else {
        printf("-1");
    }
    puts("");
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