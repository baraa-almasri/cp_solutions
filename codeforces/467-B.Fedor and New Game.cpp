// https://codeforces.com/problemset/problem/467/B 
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
using namespace std;
 
//#define DEBUG_BLYAT
 
/*
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 */
 
int countDifferentBits(int a, int b) {
    int x = a ^ b;
 
    int count{0};
 
    for (int i = 0; i < 32; ++i) {
        if (x & (1 << i)) {
            count++;
        }
    }
 
    return count;
}
 
int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif
 
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int *armies = new int[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &armies[i]);
    }
 
    int fedorsArmy;
    scanf("%d", &fedorsArmy);
 
    int difference{0};
    int ans{0};
 
    for (int i = 0; i < m; i++) {
        difference += (countDifferentBits(fedorsArmy, armies[i]) <= k);
 
        ans += (difference <= k && difference > 0);
        difference = 0;
    }
 
    printf("%d\n", ans);
 
   return 0;
}