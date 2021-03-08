// https://codeforces.com/problemset/problem/1409/A 
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

lli getBlyat(lli a, lli b) {
    double aMinB = fabs((double)a - (double)b);
    return (fmod(aMinB, 10.0) != 0? ceil(aMinB/10): (lli)aMinB/10);
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    int t;
    scanf("%d", &t);
    lli a, b;
    
    while (t--) {
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", getBlyat(a, b));
    }

    return 0;
}