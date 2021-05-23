// http://codeforces.com/problemset/problem/219/A
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
typedef unsigned long long llu;
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

void solve() {
    int k;
    scanf("%d", &k);
    
    string s(1000, '\0');
    cin >> s;

    if (s.length() % k) {
        puts("-1");
        return;
    }

    map<char, int> freqs;
    for(char c: s) {
        freqs[c]++; 
    }

    string baseStr{""};
    for (auto freq: freqs) {
        if (freq.second % k != 0) {
            puts("-1");
            return;
        }
        baseStr.append(string(freq.second/k, freq.first));
    }

    for (int i{0}; i < k; i++) {
        cout << baseStr;
    }
    puts("");
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    ios::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);

    int t{1};
    // scanf("%d", &t);
    while (t--) {
        solve();
    }

    return 0;
}