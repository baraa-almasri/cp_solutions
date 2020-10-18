// http://codeforces.com/contest/1300/problem/A
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <functional>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)

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

void readArray(int *a, int size) {
    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}

void printArray(int const * a, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    int n;
    int sum, lilprod, steps = 0;
    while(t--) {
        scanf("%d", &n);
        std::vector<int> a(n);
        std::for_each(a.begin(), a.end(), [](int& n){ std::cin >> n; } );

        lilprod = std::accumulate(a.begin(), a.end(), 1, std::multiplies<int>());

        steps = std::count_if(a.begin(), a.end(), [](int n){ return n == 0; });

        std::replace_if(a.begin(), a.end() , [](int& n){ return n == 0; }, 1);

        sum = std::accumulate(a.begin(), a.end(), 0);
        
        steps = sum == 0? steps + 1: steps;
        printf("%d\n", steps);
    }


    return 0;
}

