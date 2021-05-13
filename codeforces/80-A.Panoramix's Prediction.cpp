// https://codeforces.com/problemset/problem/80/A 
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

bool *getPrimes(int limit) {
    bool *primes = new bool[limit+1];
    memset(primes, true, limit+1);

    for (int i{2}; i <= limit; i++) {
        if (primes[i]) {
            for (int j{i*i}; j <= limit; j += i) {
                primes[j] = false;
            }
        }
    }

    return primes;
}

bool checkNeigbouringPrimes(bool *primes, int n1, int n2, int size) {
    for (int i{n1+1}; i < n2; i++) {
        if (primes[i]) {
            return false;
        }
    }

    return primes[n1] && primes[n2];
}

void solve() {
    auto primes = getPrimes(55);
    int n, m;
    scanf("%d %d", &n, &m);
    puts(checkNeigbouringPrimes(primes, n, m, 55)? "YES": "NO");
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
