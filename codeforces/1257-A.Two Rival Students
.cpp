// http://codeforces.com/contest/1257/problem/A
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

// output a vector like other languages :) 
template <typename type>
std::ostream& operator<<(std::ostream& os, std::vector<type> vec){
    os << "[";
    
    for (int i = 0; i < vec.size(); ++i) { 
        os << vec[i]; 
        
        os << (i != vec.size() - 1? ",": ""); 
  
    }
    
    os << "]";
    return os;
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
    int t;
    scanf("%d", &t);
    int n, x, a, b;

    while(t--) {
        scanf("%d %d %d %d", &n, &x, &a, &b);
        x = abs(a - b) + x >= n? n - 1 - abs(a - b): x;
        printf("%d\n", abs(a - b) == n - 1? abs(a - b): abs(a - b) + x);
    }

    return 0;
}

