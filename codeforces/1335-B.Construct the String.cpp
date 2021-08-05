// https://codeforces.com/contest/1335/problem/B
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

static string ab = "abcdefghijklmnopqrstuvwxyz";

string repeat(string s, int count) {
    ostringstream os;
    while (count--) {
        os << s;
    }
    return os.str();
}

inline void solve() {
    int a, b;
    scanf("%lld %d %d", &n, &a, &b);

    int leftChars = n%b;

    string s = repeat(ab.substr(0, b), floor(n/b));
    s += ab.substr(0, leftChars);

    cout << s << '\n';
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
