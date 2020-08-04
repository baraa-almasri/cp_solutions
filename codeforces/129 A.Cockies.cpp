// https://codeforces.com/contest/129/problem/A
#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    
    int odds{0};
    int evens{0};

    while(n--) {
        int a;
        scanf("%d", &a);
        if(a % 2 != 0) {
            odds++;
        }
        else {
            evens++;
        }
    }
    
    printf("%d\n", (odds % 2 != 0? odds: evens));
 
    return 0;
}