// https://codeforces.com/contest/1326/problem/A
#include <stdio.h>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
typedef long long int lli;

void genBadUglyNumber(int baseNumber) {

    if(baseNumber == 1) {
        printf("-1\n");
        return;
    }
    printf("2");
    forK(0, baseNumber - 1) {
        printf("3");
    }

    /*if( baseNumber % 2 != 0 ) {
        printf("9");
    }*/

    puts("");

}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        genBadUglyNumber(n);

    }

    puts("");

    return 0;
}