// http://codeforces.com/contest/691/problem/B
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <functional>
#include <numeric>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
#define all(v) v.begin(), v.end()

bool charExist(char chr, std::string str) { 
 
    return str.find(chr) != std::string::npos;
}

typedef long long int lli;

// output a vector like other languages :) 
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

// get sum of an interval
inline int getRangeSum(int start = 0, int end = 1, int step = 1) {
    int sum{0};
    for(int k = start; k <= end; k += step ) {
        sum += k;

    }    

    return sum;
}

inline bool isPrime(int n) {
    forK(2, n/2) {
		if(n % k == 0){
            return false;
        }
	
    }

    return true;
}

inline bool isOdd(int n) {

    return n % 2 == 1;
}

inline bool isEven(int n) {

    return !isOdd(n);
}

inline void GTFOH() {
    puts("NIE");
    exit(0);
}

int main() {
    std::string mirrorable{"AHIMOoTUVvWwXxYbdqp"};
    std::string allowedOnMiddle{"AHIMOoTUVvWwXxY"};
    std::map<char, char> inverse{ {'b', 'd'}, {'d', 'b'}, {'q', 'p'}, {'p' , 'q'} };

    std::string s;
    std::cin >> s;

    for(char c: s) { 
        if( !charExist(c, mirrorable) ) {
            GTFOH();
        }
        
    }

    if( isOdd(s.size()) && !charExist(s[s.size()/2], allowedOnMiddle) ) {
        GTFOH();
    }
    
    int last = s.size() - 1;

    forK(0, s.size()/ 2) {
        if( !( (charExist(s[k], allowedOnMiddle) && s[k] == s[last - k] ) || inverse[ s[k] ] == s[last - k] ) ) {
            GTFOH();
        }
    }
    puts("TAK");

    return 0;
}

