// https://codeforces.com/problemset/problem/508/B
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
#include <new>
#include <functional>
#include <set>
#include <queue>
#include <stack>

typedef long long lli;
#define all(v) v.begin(), v.end()
#define allArr(a,n) a, a+n
using namespace std;

//#define DEBUG_BLYAT

/*
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]
 */

void swap(char* c1, char* c2) {
    char tmp = *c1;
    *c1 = *c2;
    *c2 = tmp;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    char* num = (char*)malloc(100001);
    scanf("%s", num);

    int size{strlen(num)};
    int i{0}, rightEven{size-1};

    while (i < size) {
        if (num[i] % 2 == 0) {
            rightEven = i;
        }
        if (num[i]+1 <= num[size-1] && num[i] % 2 == 0) {
            break;
        }
        i++;
    }

    bool foundEven{num[rightEven] % 2 == 0};    
    swap(
        &(i != size? num[i]: num[rightEven]), 
        &num[size-1]
    );

    cout << (foundEven? num: "-1") << '\n';    
    free(num);

    return 0;
}