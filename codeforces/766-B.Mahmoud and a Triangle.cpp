// https://codeforces.com/contest/766/problem/B
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

#define var auto
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

bool canMakeTrig(lli a, lli b, lli c) {
    return (a + b > c) && 
        (a + c > b) && 
        (b + c > a);
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif
    // start of shit blyat

    int n;
    scanf("%d", &n);
    lli a[n];

    for_each(a, a+n, [](lli &n0){ cin >> n0; });
    sort(a, a+n, [](lli x, lli y){ return x > y; });

    var canMakeBlyat{false};
    forI(0, n-2) {
        if (canMakeTrig(a[i], a[i+1], a[i+2])) {
            canMakeBlyat = true;
            break;
        }
    }
    puts(canMakeBlyat? "YES": "NO");


    return 0;
}