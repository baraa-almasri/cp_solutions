// https://codeforces.com/problemset/problem/352/B
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
    
    set<int> s;
    int *a = new int[n];
    map<int, vector<int>> indexes;
 
    for (int i{0}; i < n; i++) {
        scanf("%d", &a[i]);
        s.insert(a[i]);
 
        indexes[a[i]].push_back(i+1);        
    }

    // oh big note:
    // somehow the indexes differences of each number in the sequence must be a constant, otherwise boom
    // don't look at me i'm confused too :(, but it works :)
    vector<pair<int, vector<int>>> validIndexes;
    bool sameDiff{true};
    for (auto &i : indexes) {
        sameDiff = true;

        for (int j{1}; j < i.second.size() - 1; j++) {
            if (i.second[1] - i.second[0] != i.second[j+1] - i.second[j]) {
                sameDiff = false;
                break;
            }
        }

        if (sameDiff) {
            validIndexes.push_back(i);
        }
    }
    

    printf("%d\n", validIndexes.size());
    unsigned iSize{0};
    for (auto &i: validIndexes) {
        iSize = i.second.size();
        printf("%d %d\n", 
            i.first,
            (iSize > 1? i.second[iSize-1] - i.second[iSize-2]: 0)
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
