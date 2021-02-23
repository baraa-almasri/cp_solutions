// http://codeforces.com/problemset/problem/266/B 
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

void swapChars(char* c1, char* c2) {
    char tmp = *c1;
    *c1 = *c2;
    *c2 = tmp;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    int n, t;
    scanf("%d %d", &n, &t);
    char* q = (char*)malloc(n+1);
    scanf("%s", q);

    while (t--) {
        for (int i = 0; i < n; i++) {
            if (q[i] == 'B' && q[i+1] == 'G') {
                swapChars(&q[i], &q[i+1]);
                i += 1;
            }
        }
    }

    puts(q);

    return 0;
}