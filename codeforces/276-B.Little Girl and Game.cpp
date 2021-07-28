// https://codeforces.com/problemset/problem/276/B
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
    string s;
    cin >> s;

    int palLen{0};
    int *freq = new int[123];

    for (int i{0}; i < s.size(); i++) {
        freq[(int)s[i]]++;
    }

    for (int i{97}; i < 123; i++) {
        palLen += (freq[i] % 2 == 0? freq[i]: 0);
    }

    if ((1+s.size()-palLen) % 2 == 0 || palLen == s.size()) {
        puts("First");
        return;
    }
    puts("Second");
}

int main() {
    ios::sync_with_stdio(1);
    cin.tie(NULL);
    // cout.tie(NULL);

    int t{1};
    scanf("%d", &t);
    while (t--) {
        solve();
    }

    return 0;
}
