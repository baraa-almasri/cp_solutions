// https://codeforces.com/problemset/problem/122/B
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

int countSubstr(string str, string sub) {
    int count{0};
    for (int i{0}; i < str.length(); i++) {
        if (str.find(sub) == i) {
            count++;
            for (int j{i}; j < i+sub.length(); j++) {
                str[j] = '#';
            }
        }
    }
    return count;
}

string maxMap(map<string, int> &m) {
    int max = INT32_MIN;
    string maxKey;
    for (auto p: m) {
        if (p.second > max) {
            max = p.second;
            maxKey = p.first;
        }
    }
    if (max == 0) {
        return "-1";
    }
    return maxKey;
}

void solve() {
    string s;
    cin >> s;
    
    map<string, int> freqs;

    freqs["4"]  = countSubstr(s, "4");
    freqs["7"]  = countSubstr(s, "7");
    freqs["47"] = countSubstr(s, "47");
    freqs["74"] = countSubstr(s, "74");

    cout << maxMap(freqs) << '\n';
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