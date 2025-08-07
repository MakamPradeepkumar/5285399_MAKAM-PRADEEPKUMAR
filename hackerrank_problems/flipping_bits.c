#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int flip_bits(unsigned int n){
    return n^0xFFFFFFFF;
}
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        unsigned int n ;
        scanf("%u",&n);
        unsigned int result = flip_bits(n);
        printf("%u\n",result);
    }
    return 0;
}