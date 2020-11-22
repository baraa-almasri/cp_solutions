// https://codeforces.com/contest/379/problem/A
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
    float a, b;
    scanf("%f %f", &a, &b);

    float totHours{a};
    while((a/b) > 0.009) {
        totHours += (a/b);

        a /= b;
    }
    printf("%.0f\n", floor(totHours));

    return 0;
}

