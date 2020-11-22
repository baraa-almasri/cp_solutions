// https://codeforces.com/contest/1328/problem/A
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

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
typedef long long lli;
#define all(v) v.begin(), v.end()

int main() {
    int t;
    scanf("%d", &t);
    lli a, b;
    while(t--) {
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", (a % b == 0? 0: b-(a % b)));
    }

    return 0;
}