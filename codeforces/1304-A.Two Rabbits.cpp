// http://codeforces.com/contest/1304/problem/A
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
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
    lli x, a, y, b;
    lli yMinusX, aPlusB;
    while(t--) {
        scanf("%lld %lld %lld %lld", &x, &y, &a, &b);
        yMinusX = y-x , aPlusB = a+b;

        printf("%lld\n", ( (yMinusX % aPlusB == 0)? yMinusX/aPlusB: -1L ));
    }

    return 0;
}