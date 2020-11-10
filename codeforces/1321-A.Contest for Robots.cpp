// http://codeforces.com/contest/1321/problem/A
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
typedef long long int lli;
#define all(v) v.begin(), v.end()

inline bool canWin(std::vector<std::pair<int,int>> scores) {
    for(auto p: scores) {
        if(p.first != p.second) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    int *r = new int[n];
    int rScore{0};
    forL(0, n) {
        scanf("%d", &r[l]);
    }

    int *b = new int[n];
    int bScore{0};
    forL(0, n) {
        scanf("%d", &b[l]);
    }

    forK(0, n) {
        if(r[k] > b[k]) {
            rScore++;
        } else if(b[k] > r[k]) {
            bScore++;
        }
    }

    printf("%d\n",
        ( rScore != 0? 
            (int)ceil((double)(bScore+1)/(double)rScore): -1)
    );

    return 0;
}