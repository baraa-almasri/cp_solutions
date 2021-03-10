// https://codeforces.com/contest/1395/problem/0
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

void boboniunize(lli* r, lli* g, lli* b, lli* w) {
    (*r)--;
    (*g)--;
    (*b)--;
    (*w) += 3;
}

bool isEven(lli n) {
    return n % 2 == 0;
}

bool canPal(lli r, lli g, lli b, lli w) {
    int evens = isEven(r) + isEven(g) + isEven(b) + isEven(w);
    return ((evens == 4 || evens == 0 || evens == 3) && (r >= 0 && g >= 0 && b >= 0));
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    int t;
    scanf("%d", &t);
    lli r, g, b, w;
    int odds{0};
    while (t--) {
        scanf("%lld %lld %lld %lld", &r, &g, &b, &w);

        if (canPal(r, g, b, w)) {
            puts("Yes");
        } else {
            boboniunize(&r, &g, &b, &w);
            if (canPal(r, g, b, w)) {
                puts("Yes");
                continue;
            }
            puts("No");
        }

    }

    return 0;
}