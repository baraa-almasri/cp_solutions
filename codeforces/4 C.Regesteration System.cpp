// https://codeforces.com/contest/4/problem/C
#include <stdio.h>
#include <iostream>
#include <map>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
typedef long long int lli;

using std::cin;
using std::string;
using std::map;

int main() {
    int noOfUsers;
    scanf("%d", &noOfUsers);
    

    map<string, int> *existedMFs = new map<string, int>;

    forK(0, noOfUsers) { 
        string user;
        cin >> user;

        if( (*existedMFs)[user] == 0) {
            puts("OK");
            (*existedMFs)[user]++;
        }
        else {
            
            printf("%s%d\n", user.c_str(), (*existedMFs)[user]);//
            (*existedMFs)[user]++;

            
        }
    }
    
    return 0;
}