// https://codeforces.com/contest/1073/problem/A
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)

int main() {
    int n;
    std::string s;
    std::cin >> n >> s;
  
    forK(0, n-1) {
        if( s[k] != s[k+1]) {
            printf("YES\n%c%c\n", s[k], s[k+1]);
            return 0;
        }
    } 

    puts("NO");

    return 0;
}

