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

long superdigit(long n){
    
    if(n<10){
        return n;
    }
    long sum =0;
    while(n!=0){
        
        sum+=n%10;   
        n=n/10;
    }
    
    
    return superdigit(sum);
}
int main(){
    char n[100001];
    int k;
    scanf("%s %d",n,&k);
    long sum =0;
    
    for(int i=0;i<strlen(n);i++){
        sum+=n[i]-'0';
    }
    sum *=k;
    long result =superdigit(sum);
    printf("%ld\n",result);
    return 0;
}