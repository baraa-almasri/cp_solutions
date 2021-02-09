// https://codeforces.com/problemset/problem/17/A 
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

bool arePrimesNeighbors(bool *primes, int n, int m) {
    for (int i = min(n, m); i <= max(n, m); i++) {
        if (primes[i] && (i != n && i != m)) {
            return false;
        }
    }

    return true;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    bool *primes = getPrimes(1000000);

    int n, k;
    scanf("%d %d", &n, &k);

    int noldbachs = 0;
    n++;
    while (n--) {
        if (primes[n]) {
            for (int i = n-1; i >= 2; i--) {
                if (primes[i]) {
                    for (int j = i-1; j >= 2; j--) {
                        if (primes[j] && (i+j+1) == n && arePrimesNeighbors(primes, i, j)) {
                            noldbachs++;
                            break;
                        }
                    }
                }
            }
        }
    }
    puts(noldbachs >= k? "YES": "NO");

    return 0;
}