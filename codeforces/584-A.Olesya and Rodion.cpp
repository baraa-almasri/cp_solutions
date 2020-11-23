// https://codeforces.com/contest/584/problem/A
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <utility>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
typedef long long lli;
#define all(v) v.begin(), v.end()


//#define DEBUG_BLYAT
#ifdef DEBUG_BLYAT

#include <fstream>
using std::ios;

std::ifstream inputFile("../gulag/input.txt", ios::in);
FILE *antherInputFile = fopen("../gulag/input.txt", "r");

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

#endif

bool charExist(char chr, std::string str) { 
 
    return str.find(chr) != std::string::npos;
}

inline bool canDivBlyat(lli a, lli b) {
    return a % b == 0;
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

    int n;
    char *t = (char *)malloc(10);
    fscanf(stdin, "%d %s", &n, t);
    
    bool notDivisibleByT{strlen(t) > n};
    bool divisibleBy10{atoi(t) == 10};

    forK(0, (notDivisibleByT? 0: 
        (divisibleBy10? n-1: n) 
    )) {
        printf("%s", (divisibleBy10? "1": t));
    }
    
    puts((notDivisibleByT? "-1": 
        (divisibleBy10? "0": "") 
    ));

    // end of shit blyat
    #ifdef DEBUG_BLYAT
    fclose(antherInputFile);
    inputFile.close();
    #endif
    return 0;
}