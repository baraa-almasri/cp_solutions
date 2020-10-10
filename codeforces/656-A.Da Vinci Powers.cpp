// https://codeforces.com/contest/656/problem/A
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

int main() {
    // for more info:
    // https://oeis.org/A221180

    lli foo[] = {
        1,2,4,8,16,32,64,128,256,512,1024,2048,4096,
        8092,16184,32368,64736,129472,258944,517888,1035776,
        2071552,4143104,8286208,16572416,33144832,66289664,
        132579328,265158656,530317312,1060634624,2121269248,
        4242538496,8485076992,16970153984,33940307968
    };

    int index;
    scanf("%d", &index);
    printf("%lld\n", foo[index]);

    return 0;
}
