// https://codeforces.com/problemset/problem/597/A 
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

lli countDivisiblesOnInterval(lli n, lli A, lli B) {
    if (A % n == 0) 
        return (B / n) - (A / n) + 1; 
  
    return (B / n) - (A / n);
}

lli blyat(lli n, lli A, lli B) {

    if (A >= 0) {
        return countDivisiblesOnInterval(n, A, B);
    } 

    if (A < 0 && B <= 0) {
        return countDivisiblesOnInterval(n, -1*B, -1*A);
    }

    return countDivisiblesOnInterval(n, 0, -1*A) +
        countDivisiblesOnInterval(n, 1, B);

}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif
    
    lli k, a, b;
    scanf("%lld %lld %lld", &k, &a, &b);

    printf("%lld\n", 
        blyat(k, a, b)
    );

    return 0;
}