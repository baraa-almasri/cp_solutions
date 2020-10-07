// https://www.urionlinejudge.com.br/judge/en/problems/view/1120
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

////////////////////////////////////////////////////////////////
////////////////MAIN FUNCTION///////////////////////////////////
////////////////////////////////////////////////////////////////

int main() {
    std::string lol;
    char cursed;

    while(true) {
        std::cin >> cursed >> lol;
        
        if(lol == "0" && cursed == '0') {
            break;
        }

        int matched = std::count_if(lol.begin(), lol.end(), [lol, cursed](char c){ return c == cursed; });

        int zeros1 =  std::count_if(lol.begin(), lol.end(), [lol](char c){ return c == '0'; });

        std::replace_if(lol.begin(), lol.end(), [&lol, cursed](char c) { return c == cursed; }, (char)0);
        
        int zeros2 = std::count_if(lol.begin(), lol.end(), [lol](char c){ return c == '0'; });
    
        //lol.resize(lol.size() - matched);
    
        lol = (zeros1 == lol.size() - matched || zeros2 == lol.size() - matched)? "0": lol;
        std::cout <<  lol << std::endl;
    }

    return 0;
}

////////////////////////////////////////////////////////////////
////////////////END MAIN FUNCTION///////////////////////////////
////////////////////////////////////////////////////////////////