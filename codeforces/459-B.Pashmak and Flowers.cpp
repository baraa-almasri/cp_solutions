// https://codeforces.com/problemset/problem/459/B
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

// #define DEBUG_BLYAT

/*
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 */

void solve() {
    llu n;
    scanf("%llu", &n);

    llu minB{INT32_MAX}, maxB{0}; 
    llu *b = new llu[n];
    for (int i{0}; i < n; i++) {
        scanf("%llu", &b[i]);
        minB = (b[i] < minB? b[i]: minB);
        maxB = (b[i] > maxB? b[i]: maxB);
    }
    llu fMin{0}, fMax{0};
    for (int i{0}; i < n; i++) {
        fMin += (b[i] == minB);
        fMax += (b[i] == maxB);
    }
    printf("%llu %llu\n", 
        maxB-minB,
        (minB == maxB? (n*(n-1))/2: fMin * fMax)
    );
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