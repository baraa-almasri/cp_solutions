// https://codeforces.com/problemset/problem/447/B
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

int DZY_F(string s, int* wc) {
    int sum{0};
    int size = s.length();
    for (int i = 0; i < size; i++) {
        sum += wc[(int)(s[i] - 97)] * (i+1);
    }

    return sum;
}

int maxElement(int* a) {
    int maxIndex = 0;
    for (int i = 0; i < 26; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    ios::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);

    string dzy;
    cin >> dzy;
    int k;
    int wc[26];
    scanf("%d", &k);
    for (int i = 0; i < 26; i++) {
        scanf("%d", &wc[i]);
    }
    
    int maxWC = maxElement(wc);
    dzy.append(k, (char)(maxWC+97));
    printf("%d\n", DZY_F(dzy, wc));

    return 0;
}