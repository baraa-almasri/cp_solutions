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

int getGreatestBeautifulDiv(int n) {
    return (n % 32640 == 0)? 32640: 
        (n % 8128 == 0)? 8128:
        (n % 2016 == 0)? 2016:
        (n % 496 == 0)? 496: 
        (n % 120 == 0)? 120:
        (n % 28 == 0)? 28:
        (n % 6 == 0)? 6: 1;
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