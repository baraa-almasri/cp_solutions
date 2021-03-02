// https://codeforces.com/problemset/problem/158/B
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

    int s;
    int groupSizes[5]{};
    for (int i = 0; i < n; i++) {
        scanf("%d", &s);
        groupSizes[s]++;
    }

    int taxis{0};
    // hmm
    taxis += groupSizes[4];

    // evey group of 3s goes with a group of 1s
    while (groupSizes[3] > 0) {
        groupSizes[1] = (groupSizes[1] <= 0)? 0: groupSizes[1]-1;
        taxis += ((groupSizes[3]--) + groupSizes[1] != 0);
    }

    // every group of 2s goes with an another group of 2s
    while (groupSizes[2] > 1) {
        taxis++;
        groupSizes[2] -= 2;
    }

    // what's left from the group of 1s
    int ones{0};
    if (groupSizes[1] > 0) {
        ones += groupSizes[1];
    }

    // if there's one group of 2s it goes with two groups of 1s
    if (groupSizes[2] == 1) {
        taxis++;
        ones-=2;
    }

    // the last sad group of 1s
    if (ones > 0) {
        taxis += (int)ceil((float)ones/4.0);
    }

    printf("%d\n", taxis);

    return 0;
}