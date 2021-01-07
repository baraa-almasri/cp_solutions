// https://codeforces.com/contest/1331/problem/D 
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

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif
    // start of shit blyat

    char *num = (char *)malloc(7);
    scanf("%s", num);
    printf("%d\n", 
        (int)num[6] & 0b1
    );


    return 0;
}