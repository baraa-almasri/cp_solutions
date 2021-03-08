// https://codeforces.com/problemset/problem/1352/A 
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

int countDigits(int n) {
    int digits{1};
    while (n/=10) {
        digits++;
    }

    return digits;
}

stack<int> getRoundNumbers(int n) {
    int numDigits{countDigits(n)};
    stack<int> roundNums;

    for (int i = 0; i < numDigits; i++) {
        int currentDigit = fmod(n / pow(10, i), 10);
        if (currentDigit != 0) {
            roundNums.push(currentDigit * pow(10, i));
        }
    }
    
    return roundNums;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    int t;
    scanf("%d", &t);
    int n;
    while (t--) {
        scanf("%d", &n);
        auto rounds = getRoundNumbers(n);
        printf("%d\n", rounds.size());
        while (!rounds.empty()) {
            printf("%d ", rounds.top());
            rounds.pop();
        }
        puts("");
    }

    return 0;
}