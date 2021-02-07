// https://codeforces.com/problemset/problem/230/B 
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

#define forI(start, end) for(int i = start; i < end; i++)
#define forJ(start, end) for(int j = start; j < end; j++)
#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(lli l = start; l < end; l++)
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
#include <cstdio>
#include <cmath>

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

    for (int i = 2; i*i <= limit; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }

    return prime;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif
    // start of shit blyat
    
        int t;
    scanf("%d", &t);

    bool *prime = getPrimes(1000000);

    lli n;
    lli sqrtN;
    while (t-- > 0) {
        scanf("%lld", &n);

        sqrtN = (lli)sqrt(n);
        puts(
            (prime[(int) sqrtN] && sqrtN * sqrtN == n && n > 1 ? "YES" : "NO")
        );
    }

    return 0;
}