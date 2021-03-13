// https://codeforces.com/contest/1494/problem/A
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

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    int t;
    scanf("%d", &t);

    string a;
    int opened{0}, closed{0}, otherCount{0};
    char open, close, other;
    map<char, bool> isOpen;

    while (t--) {
        cin >> a;

        open = a.front();
        close = a.back();
        
        if (open == close) {
            no:
            puts("NO");
        
        } else {
            
            other = (open == 'A' && close == 'B'? 'C': 
                open == 'A' && close == 'C'? 'B': 
                open == 'B' && close == 'A'? 'C': 
                open == 'B' && close == 'C'? 'A': 
                open == 'C' && close == 'A'? 'B': 
                open == 'C' && close == 'B'? 'A': 0);

            opened = count_if(all(a), [open](char c){ return c == open;});
            closed = count_if(all(a), [close](char c){ return c == close;});
            otherCount = count_if(all(a), [other](char c){ return c == other;});
            
            isOpen[open] = true;
            isOpen[close] = false;
            isOpen[other] = !(opened >= closed);

            stack<char> stk;
            stk.push(0);
            for (char chr: a) {
                if (isOpen[chr]) {
                    stk.push(chr);
                } else {
                    if (!isOpen[stk.top()]) {
                        goto no;
                    }
                    stk.pop();
                }
            }
            
            stk.pop();
            if (stk.empty()) {
                puts("YES");
            } else {
                goto no;
            }

            stk = stack<char>();
            stk.push(0);
        }
        
    }

    return 0;
}