// https://codeforces.com/contest/556/problem/A
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
#include <regex>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
typedef long long lli;
#define all(v) v.begin(), v.end()


//#define DEBUG_BLYAT
#ifdef DEBUG_BLYAT

#include <fstream>
using std::ios;

std::ifstream cin("../gulag/input.txt", ios::in);
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
    std::string number;
    std::cin >> n >> number;

    int removed{0};
    for(char c : number ) {
        removed += (c == '1'? 1: -1);
    }

    printf("%d\n", abs(removed));

    // end of shit blyat
    #ifdef DEBUG_BLYAT
    fclose(antherInputFile);
    cin.close();
    #endif
    return 0;
}