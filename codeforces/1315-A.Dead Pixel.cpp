// http://codeforces.com/contest/1315/problem/A
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <cmath>
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

int max(int x, int y) {
    
    return x > y? x: y;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        int a, b, x, y;
        scanf("%d %d %d %d", &a, &b, &x, &y);

        /*
         * cells arround the dead pixel:
         * (x+1,y)
         * (x-1,y)
         * (x,y+1)
         * (x,y-1)
        */
        
        int windowArea;
        int area1 = x*b;
        int area2 = (a-x-1)*b;
        int area3 = a*y;
        int area4 = (b-y-1)*a;

        windowArea = max(area1, max(area2, max(area3, area4)));

        printf("%d\n", windowArea);  

    }

    return 0;
}

