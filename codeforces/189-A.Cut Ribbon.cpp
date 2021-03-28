// https://codeforces.com/problemset/problem/189/A
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

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    ios::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, l[3];
    scanf("%d %d %d %d", &n, &l[0], &l[1], &l[2]);

    // sort(allArr(l, 3), [](int i, int j){return i < j;});

    auto ans = vector<int>();

    for (int x{n}; x >= 0; x--) {
        for (int y{n}; y >= 0; y--) {
            if (l[0]*x + l[1]*y == n) {
                // printf("%d\n", x+y+0);
                ans.push_back(x+y);
            }
            if (l[1]*x + l[2]*y == n) {
                // printf("%d\n", x+y);
                ans.push_back(x+y);
            }
            if (l[0]*x + l[2]*y == n) {
                // printf("%d\n", x+y);
                ans.push_back(x+y);
            }
            if (l[0] + l[1]*x + l[2]*y == n) {
                // printf("%d\n", x+y+1);
                ans.push_back(x+y+1);
            }
            if (l[0]*x + l[1]*y + l[2] == n) {
                // printf("%d\n", x+y+1);
                ans.push_back(x+y+1);
            }
            if (l[0]*x + l[1] + l[2]*y == n) {
                // printf("%d\n", x+y+1);
                ans.push_back(x+y+1);
            }
        }
    }
    printf("%d\n", *max_element(all(ans)));

    return 0;
}
