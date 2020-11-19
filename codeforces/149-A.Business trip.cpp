// https://codeforces.com/contest/149/problem/A
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
    int k; 
    scanf("%d", &k);
    int *months{new int[12]};
    forK(0, 12) {
        scanf("%d", &months[k]);
    }
    std::sort(months, months + 12, [](int n, int m){ return n > m;});

    int i{0};
    while(k > 0 && i < 12) {
        k -= months[i];
        i++;
    }

    printf("%d\n", (k <= 0? i: -1));

    return 0;
}

