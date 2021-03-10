// https://codeforces.com/contest/265/problem/B 
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
#include <functional>
#include <set>
#include <queue>

typedef long long lli;
#define all(v) v.begin(), v.end()
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
    int* h = new int[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }

    int secs{h[0]+1};
    for (int i = 1; i < n; i++) {
        secs += abs(h[i] - h[i-1]) + 1 + 1; // climb, jump
    }

    printf("%d\n", secs);

    return 0;
}