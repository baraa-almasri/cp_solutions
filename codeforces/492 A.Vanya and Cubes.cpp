//http://codeforces.com/contest/492/problem/A
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)

typedef long long int lli;

// get sum of an interval
int getRangeSum(int start = 0, int end = 1, int step = 1) {
    int sum{0};
    for(int k = start; k <= end; k += step ) {
        sum += k;

    }    

    return sum;
}


////////////////////////////////////////////////////////////////
////////////////MAIN FUNCTION///////////////////////////////////
////////////////////////////////////////////////////////////////

int main() {

    int n;
    scanf("%d", &n);

    int height{0};

    while(n > 0) {
        height++;
        n -= getRangeSum(1, height + 1);
    }

    printf("%d\n", height);

    return 0;
}

////////////////////////////////////////////////////////////////
////////////////END MAIN FUNCTION///////////////////////////////
////////////////////////////////////////////////////////////////