// https://www.spoj.com/problems/COMDIV/
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

int min(int a, int b) {
    return a < b? a: b;
}

int getGCD(int a, int b) {
    if (a == 0) {
        return b;
    }

    return getGCD(b % a, a);
}

int getDivisors(int a) {
    auto divisors = 0;
    forI(1, a+1) {
        if (a % i == 0) {
            divisors++;
        }
    }

    return divisors;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif
    // start of shit blyat

    int t;
    scanf("%d", &t);
    int n, m;
    
    while (t--) {
        scanf("%d %d", &n, &m);
        auto gcd = getGCD(n, m);

        printf("%d\n", getDivisors(gcd));
    }

    return 0;
}