// https://codeforces.com/problemset/problem/275/A 
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
    int lamps[3][3] = {{1,1,1}, {1,1,1}, {1,1,1}};

    int tmp;
    bool tmpValid{false};
    for (int i{0}; i < 3; i++) {
        for (int j{0}; j < 3; j++) {
            scanf("%d", &tmp);
            tmpValid = (tmp % 2 == 1 && tmp > 0);

            lamps[i][j] = (tmpValid? abs(lamps[i][j]-1): lamps[i][j]);
            if (i > 0 && tmpValid) {
                lamps[i-1][j] = abs(lamps[i-1][j]-1);
            }
            if (i < 2 && tmpValid) {
                lamps[i+1][j] = abs(lamps[i+1][j]-1);
            }
 
            if (j > 0 && tmpValid) {
                lamps[i][j-1] = abs(lamps[i][j-1]-1);
            }
            if (j < 2 && tmpValid) {
                lamps[i][j+1] = abs(lamps[i][j+1]-1);
            }

        }
    }

    for (int i{0}; i < 3; i++) {
        for (int j{0}; j < 3; j++) {
            printf("%d", lamps[i][j]);
        }
        puts("");
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
