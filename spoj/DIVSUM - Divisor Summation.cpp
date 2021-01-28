// https://www.spoj.com/problems/DIVSUM/
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

lli getDivSum(lli n) {
    if (n == 1) {
        return 0;
    }
    
    lli sum = 0;
    // calculate once to avoid tle blyat!
    double sqrtN = sqrt(n);

    for (lli i = 1; i <= sqrtN; i++) {
        sum += (n % i == 0)? i + (n/i): 0;
    }
 
    return sum - n - (sqrtN == (lli)sqrtN? sqrtN: 0);
}

int main() {
	
    int t;
    scanf("%d", &t);
 
    lli n;
    while (t--) {
        scanf("%lld", &n);
        printf("%lld\n", getDivSum(n));
    }

	return 0;
} 