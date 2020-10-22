// http://codeforces.com/contest/151/problem/A
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
typedef long long int lli;
#define all(v) v.begin(), v.end()

bool charExist(char chr, std::string str) { 
 
    return str.find(chr) != std::string::npos;
}

int min(int a, int b) {

    return a < b? a: b;
}

// get sum of an interval
inline int getRangeSum(int start = 0, int end = 1, int step = 1) {
    int sum{0};
    for(int k = start; k <= end; k += step ) {
        sum += k;

    }    

    return sum;
}

inline bool isPrime(int n) {
    forK(2, n/2) {
		if(n % k == 0){
            return false;
        }
	
    }

    return true;
}

inline bool isOdd(int n) {

    return n % 2 == 1;
}

inline bool isEven(int n) {

    return !isOdd(n);
}

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    printf("%d\n", min(min( (k*l)/nl, d*c), p/np)/n);

    return 0;
}

