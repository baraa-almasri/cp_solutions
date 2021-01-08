// https://codeforces.com/contest/1323/problem/A
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
#include <stack>

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

    int t;
    scanf("%d", &t);
    int n, num;

    stack<int> *evens, *odds, *res;

    while (t--) {
        evens = new stack<int>;
        odds = new stack<int>;

        scanf("%d", &n);
        forI(0, n) {
            scanf("%d", &num);
            if (num % 2 == 0) {
                evens->push(i+1);
            } else {
                odds->push(i+1);
            }
        }

        res = odds->size() > 1? odds: evens;

        if (res->size() == 0) {
            puts("-1");
        } else {

            if (res->size() > 2) {
                while (res->size() > 2) {
                    res->pop();
                }
            }

            printf("%d\n", res->size());
            
            while (!res->empty()) {
                printf("%d ", res->top());
                res->pop();
            }
        
            puts("");
        }
        delete evens;
        delete odds;
    }


    return 0;
}