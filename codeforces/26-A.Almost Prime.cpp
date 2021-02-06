// https://codeforces.com/problemset/problem/26/A
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
    forK(2, n/2) 
		if(n % k == 0)
            return false;

    return true;
}

#endif

bool isPrime(lli n) {

    for (lli i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return n > 1;
}

bool *getPrimes(int limit) {
    bool *prime = new bool[limit + 1];

    for (int i = 2; i <= limit; i++) {
        prime[i] = true;
    }

    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) {
            prime[i] = true;
            for (int j = 2 * i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }

    return prime;
}

void primeFactor(bool *primes, vector<int> &factors, int n) {
    if (primes[n]) {
        factors.push_back(n);
        return;
    }

    for (int i = 2; i <= n/2; i++) {
        if (primes[i] && n % i == 0) {
            factors.push_back(i);
            primeFactor(primes, factors, n/i);
            break;
        }
    }

} 

int countDistinct(vector<int> &v) {
    set<int> s;
    for (int e: v) {
        s.insert(e);
    }

    return s.size();
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif
    // start of shit blyat
    
    int n;
    scanf("%d", &n);

    bool *prime = getPrimes(3001);

    int almostPrimes = 0;
    vector<int> factors;
    n++;
    while (n-- > 2) {
        primeFactor(prime, factors, n);
        almostPrimes += (countDistinct(factors) == 2);

        factors = vector<int>();
    }

    printf("%d\n", almostPrimes);
    
    return 0;
}