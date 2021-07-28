// https://codeforces.com/problemset/problem/298/B
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
    lli t, sx, sy, ex, ey;
    scanf("%lld %lld %lld %lld %lld", &t, &sx, &sy, &ex, &ey);
    string dirs;
    cin >> dirs;
 
    lli steps{0};
    bool reached{false};
    for (char &dir: dirs) {
        switch (dir) {
        case 'E':
            if (ex > sx) {
                sx++;
            }
            break;    
        case 'W':
            if (ex < sx) {
                sx--;
            }
            break;    
        case 'N':
            if (ey > sy) {
                sy++;
            }
            break;    
        case 'S':
            if (ey < sy) {
                sy--;
            }
            break;    
        }
        steps++;
 
        if (sx == ex && sy == ey) {
            reached = true;
            break;
        }
    }
 
    printf("%lld\n", reached? steps: -1);
}
 
int main() {
	// for future references, disable these when fucking with strings :)
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    int t{1};
    // scanf("%d", &t);
    while (t--) {
        solve();
    }
 
    return 0;
}