// http://codeforces.com/contest/978/problem/B
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)

typedef long long int lli;

// output a vector like other languages :) 
template <typename type>
std::ostream& operator<<(std::ostream& os, std::vector<type> vec){
    os << "[";
    
    for (int i = 0; i < vec.size(); ++i) { 
        os << vec[i]; 
        
        os << (i != vec.size() - 1? ",": ""); 
  
    }
    
    os << "]";
    return os;
}

// get sum of an interval
int getRangeSum(int start = 0, int end = 1, int step = 1) {
    int sum{0};
    for(int k = start; k <= end; k += step ) {
        sum += k;

    }    

    return sum;
}

////////////////////////////////////////////////////////////////
////////////////MAIN FUNCTION///////////////////////////////////
////////////////////////////////////////////////////////////////

int main() {
    int n;
    std::string fileName;

    std::cin >> n >> fileName;

    int Xs{0};

    forK(0, fileName.size()-2) {

        if ( fileName[k] == 'x' && fileName[k+1] == 'x' && fileName[k+2] == 'x' ) {
            std::string pre, post;
            pre = fileName.substr(0, k);
            post = fileName.substr(k+1, fileName.size()-1);

            fileName = pre + post;
            Xs++;
            k = -1;
            
        }

    }

    std::cout << Xs << std::endl;


    return 0;
}

////////////////////////////////////////////////////////////////
////////////////END MAIN FUNCTION///////////////////////////////
////////////////////////////////////////////////////////////////