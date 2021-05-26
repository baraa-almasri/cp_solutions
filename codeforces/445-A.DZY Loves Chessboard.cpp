// https://codeforces.com/problemset/problem/445/A
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

    string *cb = new string[n];
    for_each(allArr(cb, n), [](string &row) { cin >> row; });

    int *chessmenColorsIndexs = new int[m]; // used to determine what chessman to put in the next row, much wow!
    chessmenColorsIndexs[0] = true; // true -> white, false -> black

    for_each(allArr(cb, n), [&chessmenColorsIndexs, m](string &row) -> void {
        for (int i{0}; i < m; i++) {
            auto foo = chessmenColorsIndexs[i];
            row[i] = (row[i] == '.'?
                chessmenColorsIndexs[i]? 'W': 'B':
                row[i]
            );

            chessmenColorsIndexs[((i+1) % m)] = 
                (((i+1) % m) == 0 && m % 2 == 0? chessmenColorsIndexs[i]: !chessmenColorsIndexs[i]);
        }
    });

    for_each(allArr(cb, n), [](string &row) { cout << row << '\n'; });
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