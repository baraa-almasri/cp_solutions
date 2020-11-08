// http://codeforces.com/contest/979/problem/A
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
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

inline bool isOdd(lli n) {

    return n % 2 == 1;
}

inline bool isEven(lli n) {

    return !isOdd(n);
}

int main() {
    lli friends;
    scanf("%lld", &friends);
    friends += friends > 0? 1: 0;
    printf("%lld\n", 
        (isEven(friends)? friends/2: friends)
    );

    return 0;
}

