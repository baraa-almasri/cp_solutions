// https://codeforces.com/problemset/problem/762/A
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
#include <queue>

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


#endif

/*
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 */

struct Divs {
    vector<lli> beforeRoot;
    vector<lli> afterRoot;

    Divs(vector<lli> beforeRoot, vector<lli> afterRoot): 
        beforeRoot{beforeRoot}, afterRoot{afterRoot} {}
    
    int countDivs() const {
        return this->beforeRoot.size() + this->afterRoot.size();
    }
};

Divs* getDivisors(lli n) {
    lli sqrtN = (lli)sqrt(n);
    vector<lli> beforeRoot;
    vector<lli> afterRoot;

    for (lli i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            beforeRoot.push_back(i);
            afterRoot.push_back(n/i);
        }
    }

    // to remove dublicate roots
    if (beforeRoot.back() == afterRoot.back()) {
        afterRoot.pop_back();
    }

    return new Divs(beforeRoot, afterRoot);
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    lli n, k;
    scanf("%lld %lld", &n, &k);

    Divs* nDivs = getDivisors(n);
    
    if (nDivs->countDivs() < k) {
        puts("-1");
        return 0;
    }

    if (k <= nDivs->beforeRoot.size()) {
        printf("%lld\n", nDivs->beforeRoot.at(k-1));
    
    } else {
        printf("%lld\n", 
            nDivs->afterRoot.at(
                // ahem ahem, reverse index; just for futute reference :)
                nDivs->afterRoot.size()-(k-nDivs->beforeRoot.size()))
        );
                
    }

    return 0;
}