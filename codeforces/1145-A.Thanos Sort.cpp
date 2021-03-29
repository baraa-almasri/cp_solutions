// https://codeforces.com/contest/1145/problem/A 
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

vector<int> getLeftArray(vector<int> a) {
    auto snapped = vector<int>(a.begin(), a.begin()+(a.size()/2));
    return snapped;
}

vector<int> getRightArray(vector<int> a) {
    auto snapped = vector<int>(a.begin()+(a.size()/2), a.end());
    return snapped;
}
/*
 * for future reference:
 * returning the sliced vector this way causes a memeory leak for some reason 🌚
 * vector<int> getRightArray(vector<int> a) {
 *     return vector<int>(a.begin()+(a.size()/2), a.end());
 * }
 */

int getMaxSubSortedSize(vector<int> a) {
    if (is_sorted(a.begin(), a.end())) {
        return a.size();
    }

    auto l = getLeftArray(a);
    auto r = getRightArray(a);

    return max(
        getMaxSubSortedSize(l),
        getMaxSubSortedSize(r)
    );
}

void solve() {
    int n;
    scanf("%d", &n);
    auto a = vector<int>(n);
    for_each(all(a), [](int &i) {scanf("%d", &i);});

    printf("%d\n", getMaxSubSortedSize(a));
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