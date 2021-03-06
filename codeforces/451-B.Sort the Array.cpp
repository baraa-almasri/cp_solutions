// https://codeforces.com/problemset/problem/451/B
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

    int n;
    scanf("%d", &n);
    lli *a = new lli[n];

    for_each(allArr(a, n), [](lli &i){scanf("%lld", &i);});
    int beginIt{1}, endIt{1};
    bool updateEndIt{false};

    for (int i = 1; i < n; i++) {
        if (a[i-1] > a[i] && !updateEndIt) {
            beginIt = i;
            updateEndIt = true;
        }

        if (a[i-1] > a[i] && updateEndIt) {
            endIt = i+1;
        }

    }

    reverse(a+beginIt-1, a+endIt);
    
    if (is_sorted(allArr(a, n))) {
        printf("yes\n%d %d\n", beginIt, endIt);
    } else {
        printf("no\n");
    }
    return 0;
}