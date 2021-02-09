// https://www.spoj.com/problems/AMR11E/
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

bool *getPrimes(lli limit) {
    bool *primes = new bool[limit+1];
    // trying this thing out!
    memset(primes, true, limit+1);
    primes[0] = primes[1] = false;

    for (lli i = 2; i*i < limit; i++) {
        if (primes[i]) {
            for (lli j = i*i; j <= limit; j += i) {
                primes[j] = false;
            }
        }
    }

    return primes;
}

void primeFactor(bool *primes, vector<lli> &factors, lli n) {
    if (primes[n]) {
        factors.push_back(n);
        return;
    }

    for (lli i = 2; i <= n/2; i++) {
        if (primes[i] && n % i == 0) {
            factors.push_back(i);
            primeFactor(primes, factors, n/i);
            break;
        }
    }
}

int getDistinctDivs(vector<lli> &factors) {
    set<lli> s;
    for (lli e: factors) {
        s.insert(e);
    }

    return s.size();
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif
    // start of shit blyat

    bool *primes = getPrimes(1000000);
    vector<lli> factors;

    int t;
    scanf("%d", &t);
    

    int n, luckyBlyat = 30;
    while (t--) {
        scanf("%d", &n);
        for (int number = 30, count = 0; count < n; number++ ) {
            primeFactor(primes, factors, number);
            if (getDistinctDivs(factors) >= 3) {
                count++;
                luckyBlyat = number;
            }
        factors = vector<lli>();
        }

        printf("%d\n", luckyBlyat);
        luckyBlyat = 30;
    }


    return 0;
}