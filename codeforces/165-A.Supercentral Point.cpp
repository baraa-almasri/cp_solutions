// https://codeforces.com/problemset/problem/165/A
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

    auto *points = new pair<int, int>[n];
    int x, y;
    for (int i{0}; i < n; i++) {
        scanf("%d %d", &x, &y);
        points[i].first = x;
        points[i].second = y;
    }

    int SCPoints{0};
    for (int i{0}; i < n; i++) {
        int r{0}, l{0}, u{0}, d{0};
        for (int j{0}; j < n; j++) {
            d += ((j != i) && (points[j].first == points[i].first && points[j].second > points[i].second));
            u += ((j != i) && (points[j].first == points[i].first && points[j].second < points[i].second));
            l += ((j != i) && (points[j].first > points[i].first && points[j].second == points[i].second));
            r += ((j != i) && (points[j].first < points[i].first && points[j].second == points[i].second));

        }
        SCPoints += (d && u && l && r);
    }
    printf("%d\n", SCPoints);
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