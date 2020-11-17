// https://codeforces.com/contest/38/problem/A
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
    int n;
    scanf("%d", &n);
    int *d = new int[n];
    forK(1, n) {
        scanf("%d", &d[k]);
    }
    int a, b;
    scanf("%d %d", &a, &b);

    int years{0};
    forK(a, b) {
        years += d[k];
    }
    printf("%d\n", years);

    return 0;
}

