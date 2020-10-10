// http://codeforces.com/contest/1031/problem/A
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

int countCellsOnRing(int w, int h, int level) {

    return 2*( (w-4*level) + (h-4*level) ) - 4;

}

int main() {
    int h, w, k;
    scanf("%d %d %d", &w, &h, &k);
    
    int cells{0};
    while(k--) {
        cells += countCellsOnRing(w, h ,k);
    }
    
    printf("%d\n", cells);

    return 0;
}
