// https://codeforces.com/contest/313/problem/A
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


bool charExist(char chr, std::string str) { 
 
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

int max (int x, int y) {
    return x > y? x: y;
}

int main() {
    std::string bankState;
    std::cin >> bankState;

    if (bankState[0] == '-') {
        int *digits = new int[bankState.length()];
    
        forI(0, bankState.length()) {
            digits[i] = (int)bankState[i]-48;
        }

        int maxElement = max((char)(bankState.back()-48), (char)(bankState[bankState.length()-2]-48));

        int maxIndex = bankState.find_last_of((char)(maxElement+48));

        bankState = bankState.erase(maxIndex,1);
        if (bankState[maxIndex] == '0' && bankState.length() < 3) {
            bankState = "0";
        }
    }

    puts(bankState.c_str());

    // end of shit blyat
    #ifdef DEBUG_BLYAT
    fclose(antherInputFile);
    cin.close();
    #endif
    return 0;
}