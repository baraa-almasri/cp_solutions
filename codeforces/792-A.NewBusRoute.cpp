// http://codeforces.com/contest/792/problem/A
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
typedef long long int lli;
#define all(v) v.begin(), v.end()

bool charExist(char chr, std::string str) { 
 
    return str.find(chr) != std::string::npos;
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

int main() {
    int n;
    scanf("%d", &n);
    std::vector<lli> cords(n);

    std::for_each(all(cords), [](lli &n){ scanf("%lld", &n); });
    std::sort(all(cords));

    std::map<int, int> diffirences;

    forK(0, n-1) {
        diffirences[abs(cords[k] - cords[k+1])]++;
    
    }

    // use the same vector to reduce memory usage :0
    cords.clear();
    cords.shrink_to_fit();

    for(auto p: diffirences) {
        cords.push_back(p.first);
    }

    int minEl = *std::min_element(all(cords));

    printf("%d %d\n", minEl, diffirences[minEl]);

    return 0;
}

