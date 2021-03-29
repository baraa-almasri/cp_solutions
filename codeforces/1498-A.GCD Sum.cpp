// https://codeforces.com/contest/1498/problem/B
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
 * [[[[[[[[[[[[[[[[🌚]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[🌚]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[🌚]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[🌚]]]]]]]]]]]]]]]]
 */

lli countDigits(lli n) {
    lli digits{1};
    while (n/=10) {
        digits++;
    }

    return digits;
}

lli getSumDigits(lli n) {
    lli numDigits{countDigits(n)};
    
    lli diditsSum{0};
    for (lli i = 1; i <= numDigits; i++) {
        lli p = pow(10, i-1);
        lli currentDigit = n / p % 10;

        if (currentDigit != 0) {
            diditsSum += currentDigit;
        }
    }
    
    return  diditsSum;
}

lli getGCD(lli a, lli b) {
    if (a == 0) {
        return b;
    }
    return getGCD(b % a, a);
}

void solve() {
    lli n;
    scanf("%lld", &n);
    
    lli gcdSum = getGCD(n, getSumDigits(n));
    while (gcdSum <= 1) {
        n++;
        gcdSum = getGCD(n, getSumDigits(n));
    }

    printf("%lld\n", n);
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    ios::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);

    int t{1};
    scanf("%d", &t);
    while (t--) {
        solve();
    }

    return 0;
}