// https://codeforces.com/contest/577/problem/A
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <utility>

#define forI(start, end) for(int i = start; i < end; i++)
#define forJ(start, end) for(int j = start; j < end; j++)
#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(lli l = start; l < end; l++)
typedef long long lli;
#define all(v) v.begin(), v.end()


//#define DEBUG_BLYAT
#ifdef DEBUG_BLYAT
#include <fstream>
using std::ios;

static std::ifstream cin("../gulag/input.txt", ios::in);

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

inline bool charExist(char chr, std::string str) { 
 
    return str.find(chr) != std::string::npos;
}

inline bool canDivBlyat(lli a, lli b) {
    return a % b == 0;
}


inline bool isPrime(lli n) {
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
#endif

int main() {
    #ifdef DEBUG_BLYAT
    stdin = fopen("../gulag/input.txt", "r");
    #endif
    // start of shit blyat

    int n;
    lli x;
    scanf("%d %lld", &n, &x);
    
    int divisors{0};
    forI(1, n+1) {
        divisors += (x % i == 0 && x/i <= n)? 1: 0;
    }

    printf("%d\n", divisors);

    // end of shit blyat
    #ifdef DEBUG_BLYAT
    cin.close();
    #endif
    return 0;
}