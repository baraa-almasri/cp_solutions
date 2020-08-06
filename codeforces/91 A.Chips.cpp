// https://codeforces.com/contest/92/problem/A
#include <stdio.h>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
typedef long long int lli;
 
int main() {
    int n;
    int m;
    scanf("%d %d", &n, &m);

    forK(1, n + 1) {
        if( m < k) {
            break;
        }

        m -= k;
        if(k == n) {
            k = 0;
            continue;
        }
        
    }    
    printf("%d\n", m);

    return 0;
}