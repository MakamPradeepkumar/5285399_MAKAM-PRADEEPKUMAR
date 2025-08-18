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

long xor(long n){
    long count = 0;
    if(n==0){
        return 1;
    }
    while(n){
        if((n&1)==0)
            count++;
        n>>=1;   
        
    }
    return(long)pow(2,count);
    
}
int main(){
    long n;
    scanf("%ld",&n);
    printf("%ld\n",xor(n));
    return 0;
}
