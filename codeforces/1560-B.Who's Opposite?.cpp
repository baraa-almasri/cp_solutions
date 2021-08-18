// https://codeforces.com/contest/1560/problem/B
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
    lli a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    lli _size = (max(a, b) - min(a, b)) * 2;
    if ((max(a, b) - min(a, b)) == 1 || max(a, b) > _size) {
        puts("-1");
        return;
    }

    if (c > (_size/2) && c <= _size) {
        printf("%lld\n", c-(_size/2));
    
    } else if (c <= (_size/2) && c+(_size/2) <= _size) {
        printf("%lld\n", c+(_size/2));

    } else {
        puts("-1");
    }
}

int main() {
#ifndef ONLINE_JUDGE
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#endif

    lli t{1};
    scanf("%lld", &t);
    while (t--) {
        solve();
    }

    return 0;
}
