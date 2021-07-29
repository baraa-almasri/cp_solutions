// https://codeforces.com/problemset/problem/433/B
#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef unsigned long long llu;
#define all(v) v.begin(), v.end()
#define allArr(a,n) a, a+n
#define watch(x) cout << #x <<" = " << x << '\n';

static lli n;

template <typename type> inline std::ostream& operator<<(std::ostream& os, std::vector<type> &vec){
    os << "[";
    for (int i = 0; i < vec.size(); i++) { 
        os << vec[i] << (i != vec.size() - 1? ", ": ""); 
    }
    os << "]\n";
    return os;
}

template <typename type> inline std::istream& operator>>(std::istream& is, std::vector<type> &vec){
    for (int i = 0; i < vec.size(); i++) {
        is >> vec[i]; 
    }
    return is;
}

template <typename type> inline std::istream& operator>>(std::istream& is, type *arr){
    for (int i = 0; i < n; i++) {
        is >> arr[i]; 
    }
    return is;
}

inline bool charExist(char chr, std::string str) {  
    return str.find(chr) != std::string::npos;
}

/*
 * [[[[[[[[[[[[[[[[hello]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[darkness]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[my]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[old]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[friend]]]]]]]]]]]]]]]]
 */

inline void solve() {
    scanf("%lld", &n);
    vector<lli> v(n), ps(n);
    vector<lli> ps2(n);
    for (int i{0}; i < n; i++) {
        scanf("%lld", &v[i]);
        ps[i] = i > 0? ps[i-1]+v[i]: v[0];
        ps2[i] = ps[i];
    }

    int m, l, r, t;
    scanf("%d", &m);
    if (!is_sorted(all(v))) {
        sort(all(v));
        for (int i{0}; i < n; i++) {
            ps2[i] = i > 0? ps2[i-1]+v[i]: v[0];
        }
    }

    while (m--) {
        scanf("%d %d %d", &t, &l, &r);

        printf("%lld\n", 
            (t == 1? 
            ps[r-1]-(l > 1? ps[l-2]: 0):
            ps2[r-1]-(l > 1? ps2[l-2]: 0))
        );
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t{1};
    // scanf("%d", &t);
    while (t--) {
        solve();
    }

    return 0;
}
