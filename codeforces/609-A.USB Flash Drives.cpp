// https://codeforces.com/contest/609/problem/A
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
#include <fstream>
using std::ios;
static std::ifstream cin("../gulag/input.txt", ios::in);

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
    stdin = fopen("../gulag/input.txt", "r");
    #endif
    // start of shit blyat

    int n, m;
    cin >> n >> m;
    int f[n];
    for_each(f, f + n, [&f](int &f0){ cin >> f0; });
    sort(f, f + n, [](int a, int b){ return a > b;});

    var usbs{0};
    for (auto i : f) {
        if (m <= 0) {
            break;
        }
        m -= i;
        usbs++;
    }

    printf("%d\n", usbs);

    // end of shit blyat
    #ifdef DEBUG_BLYAT
    cin.close();
    #endif
    return 0;
}