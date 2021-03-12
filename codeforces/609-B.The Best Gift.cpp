// https://codeforces.com/contest/609/problem/B
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

    int n, m;
    scanf("%d %d", &n, &m);

    int genres[11]{0};
    int in;
    for (int i = 0; i < n; i++) {
        scanf("%d", &in);
        genres[in]++;
    }
    
    lli repeated{0L};
    for (int i = 1; i <= m; i++) {
        for (int j = i+1; j <= m; j++) {
            repeated += genres[i]*genres[j];
        }
    }  

    printf("%lld\n", repeated);

    return 0;
}