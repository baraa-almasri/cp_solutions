// https://codeforces.com/problemset/problem/499/B
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

int findBlyat(string* ss, int size, string e) {
    for (int i = 0; i < size; i++) {
        if (ss[i] == e) {
            return i;
        }
    }
    return -1;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    int n, m;
    scanf("%d %d", &n, &m);

    string* firstLang = new string[m];
    string* secondLang = new string[m];

    for (int i = 0; i < m; i++) {
        cin >> firstLang[i];
        cin >> secondLang[i];
    }

    string* lecture = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> lecture[i];
    }

    int ifirst{-1}, isecond{-1};
    string first, second;
    int nonZeroIndex;

    for (int i = 0; i < n; i++) {
        ifirst = findBlyat(firstLang, m, lecture[i]);    
        isecond = findBlyat(secondLang, m, lecture[i]);    

        nonZeroIndex = (ifirst > -1? ifirst: isecond);

        first = firstLang[nonZeroIndex];
        second = secondLang[nonZeroIndex];

        if (second.length() < first.length()) {
            cout << second << " ";
        } else {
            cout << first << " ";
        }
    }
    puts("");

    return 0;
}