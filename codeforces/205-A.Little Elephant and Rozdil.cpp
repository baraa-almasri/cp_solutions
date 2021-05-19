// https://codeforces.com/problemset/problem/205/A
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

    lli *times = new lli[n];
    for_each(allArr(times, n), [](lli &i){scanf("%lld", &i);});

    lli min{INT32_MAX};
    map<lli, int> freqs;
    int minIndex{-1};

    for (int i{0}; i < n; i++) {
        if (times[i] < min) {
            minIndex = i+1;
            min = times[i];
        }
        freqs[times[i]]++;
    };

    cout << (freqs[min] == 1? to_string(minIndex): "Still Rozdil") << '\n';

    // Still Rozdil
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