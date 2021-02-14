// http://codeforces.com/contest/893/problem/B
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
#include <functional>
#include <set>

typedef long long lli;
#define all(v) v.begin(), v.end()
using namespace std;

//#define DEBUG_BLYAT
#ifdef DEBUG_BLYAT
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

inline bool isPrime(lli n) {
 
    for (lli i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
 
    return n > 1;
}

#endif

/*
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 */

bool isBeautiful(int n) {
    int sqrtN = sqrt(n);
    for (int k = 1; k <= sqrtN; k++) {
        if ( ((pow(2, k) - 1) * pow(2, k-1)) == n ) {
            return true;
        }
    }

    return false;
}

int getGreatestBeautifulDiv(int n) {
    int maxDiv = 1;
    for (int i = 1; i <= n; i++) {
        maxDiv = (n % i == 0 && isBeautiful(i))? i: maxDiv;
    }

    return maxDiv;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    int n;
    scanf("%d", &n);
    printf("%d\n", getGreatestBeautifulDiv(n));

    return 0;
}