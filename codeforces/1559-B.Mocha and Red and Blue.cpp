// problem link
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

int countQM(string &s) {
    return count_if(all(s), [](char &c) { return c == '?'; });
}

inline void solve() {
    scanf("%lld", &n);
    string c;
    cin >> c;

    int qmCount{0};
    for (int i{0}; i < n; i++) {
        qmCount = countQM(c);
        if (qmCount == 0) {break;};

        switch (c[i]) {
        case 'R':
            if (i > 0 && c[i-1] == '?') c[i-1] = 'B'; 
            if (i < n-1 && c[i+1] == '?') c[i+1] = 'B'; 

            break;
        case 'B': 
            if (i > 0 && c[i-1] == '?') c[i-1] = 'R'; 
            if (i < n-1 && c[i+1] == '?') c[i+1] = 'R'; 

            break;
        }

        if (i == n-1) {
            if (qmCount == n) {
                c[0] = 'B';
            }
            i = -1;
        }
    }

    cout << c << '\n';
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
