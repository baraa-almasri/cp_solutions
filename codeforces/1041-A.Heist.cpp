// https://codeforces.com/contest/1041/problem/A
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

bool charExist(char chr, std::string str) { 
 
    return str.find(chr) != std::string::npos;
}

int main() {
    int n;
    scanf("%d", &n);
    std::vector<lli> indices(n);
    std::for_each(all(indices), [](lli &n){scanf("%lld", &n);});
    std::sort(all(indices));
    lli stolen{0};
    forK(1, n) {
        stolen += indices[k] - indices[k-1] - 1;
    }
    printf("%lld\n", stolen);

    return 0;
}

