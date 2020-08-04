// https://codeforces.com/gym/102397/problem/D
#include <stdio.h>
#include <vector>
#include <algorithm>
 
#define forK(start, end) for(int k = start; k < end; k++)
#define forL(start, end) for(int l = start; l < end; l++)
typedef long long int lli;
 
using std::vector;
 
template<typename type>
type sumOfArray(vector<type> someArray) {
    type tot{0};
    forK(0, someArray.size()) {
        tot += someArray.at(k);
    }
 
    return tot;
}
 
template<typename type>
vector<type> getSubArray(vector<type> sourceArray, int startIndex, int endIndex) {
    vector<type> subArray;
 
    forK(startIndex, endIndex) {
        subArray.push_back( sourceArray.at(k) );
    }
 
    return subArray;
}
 
int main() {
    int noOfHouses;
    int ammountOfGold;
 
    scanf("%d %d", &noOfHouses, &ammountOfGold);
 
    vector<int> *coinsPerHouse = new vector<int>;
    
    forK(0, noOfHouses) {
        int tmp;
        scanf("%d", &tmp);
        coinsPerHouse->push_back(tmp);
    }
 
    vector<int> *noOfRobbedHouses = new vector<int>;
    int result{0};
    forK(0, noOfHouses ) {
        forL(k, noOfHouses ) {
            int sum = sumOfArray<int>( getSubArray<int>( *coinsPerHouse, k, l+1));
        
            if(sum >= ammountOfGold) {
                noOfRobbedHouses->push_back( l - k + 1);
 
            }
            
        }
    }
    
    if(!noOfRobbedHouses->empty()) {
        result = *std::min_element(noOfRobbedHouses->begin(), noOfRobbedHouses->end());
    }
    else {
        result = -1;
    }
    
 
    printf("%d\n", result);    
 
    
 
    return 0;
}