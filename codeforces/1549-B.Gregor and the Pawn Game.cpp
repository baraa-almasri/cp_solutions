// https://codeforces.com/contest/1549/problem/B
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
    string e, g;
    cin >> e >> g;

    int reachedPawnes{0};
    for (int i{0}; i < n; i++) {
        if (e[i] == '0' && g[i] == '1') {
            reachedPawnes++;
            g[i] = '#';
            continue;
        
        } else if (i > 0 && g[i] == '1' && e[i-1] == '1') {
            reachedPawnes++;
            e[i-1] = '#';
            continue;
        
        } else if (i < n-1 && g[i] == '1' && e[i+1] == '1') {
            reachedPawnes++;
            e[i+1] = '#';
            continue;
        }
    }
    printf("%d\n", reachedPawnes);
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int t{1};
    scanf("%d", &t);
    while (t--) {
        solve();
    }

    return 0;
}
