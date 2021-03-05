// https://codeforces.com/problemset/problem/492/B
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

double max(double n, double m) {
    return n >= m? n: m;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    lli n, l;
    scanf("%lld %lld", &n, &l);
    lli* lanterns = new lli[n];

    for_each(allArr(lanterns, n), [](lli &i){scanf("%lld", &i);});
    sort(allArr(lanterns, n), [](lli x, lli y){return x < y;});
    
    lli overallDifference{0L}, frontDifference{0L}, backDifference{0L};
    frontDifference = lanterns[0] - 0;
    backDifference = l - lanterns[n-1];

    for (int i = 1; i < n; i++) {
        overallDifference = 
            max(overallDifference, lanterns[i] - lanterns[i-1]);
            /*
            ((lanterns[i] - lanterns[i-1] > overallDifference)? 
                lanterns[i] - lanterns[i-1]: overallDifference);
            */
    }

    double ans = 
        max((double)overallDifference/2.0, max(frontDifference, backDifference));

    ans = ((overallDifference) == max(frontDifference, backDifference))? (double)overallDifference/2.0: ans;

    printf("%.10lf\n", ans);

    return 0;
}