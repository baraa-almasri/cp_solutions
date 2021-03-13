// https://codeforces.com/contest/1494/problem/A
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

bool isValidParenths(string s) {
	if (s.length()%2 != 0) {
		return false;
	}

	stack<char> stk;
	stk.push(0);
	char top;
	for (char c: s) {
		if (!stk.empty()) {
			top = stk.top();
		}

		switch (c) {
		case '(':
			stk.push(c);
			break;

		case ')':
			if (top != '(') {
				return false;
			}
			stk.pop();
			break;
		}
	}

	stk.pop();
	return stk.empty();
}

int countChar(string s, char c) {
    int count{0};
    for (char chr: s) {
        count += (chr == c);
    }

    return count;
}

int main() {
    #ifdef DEBUG_BLYAT
    freopen("../gulag/input.txt", "r", stdin);
    #endif

    int t;
    scanf("%d", &t);

    string a;
    int opened{0}, closed{0}, otherCount{0};
    char open, close, other;
    int size;
    while (t--) {
        cin >> a;

        open = a.front();
        close = a.back();

        other = (open == 'A' && close == 'B'? 'C': 
            open == 'A' && close == 'C'? 'B': 
            open == 'B' && close == 'A'? 'C': 
            open == 'B' && close == 'C'? 'A': 
            open == 'C' && close == 'A'? 'B': 
            open == 'C' && close == 'B'? 'A': 0);

        if (open == close) {
            no:
            puts("NO");
        
        } else {

            opened = countChar(a, open);
            closed = countChar(a, close);
            otherCount = countChar(a, other);

            if (closed + opened != otherCount && opened + otherCount != closed && otherCount + closed != opened) {
                goto no;
            }

            size = a.length();
            for (int i = 0; i < size; i++) {
                if (a[i] == open) {
                    a.replace(i, 1, "(");
                } else if (a[i] == close) {
                    a.replace(i, 1, ")");
                } else if (a[i] == other && opened >= closed) {
                    a.replace(i, 1, ")");
                } else if (a[i] == other && opened < closed) {
                    a.replace(i, 1, "(");
                }
            }

            if (isValidParenths(a)) {
                puts("YES");
            } else {
                goto no;
            }
        }
        
    }

    return 0;
}