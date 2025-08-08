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

int birthday(int s_count,int* s, int d, int m){
    int ways =0;
    for(int i=0;i<=s_count-m;i++){
        int sum =0;
        for(int j=0;j<m;j++){
            sum+=s[i+j];
        }
        if(sum==d){
            ways++;
        }
    }
    return ways;
}

int main(){
    int n;
    scanf("%d",&n);
    
    int* s = malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    
    int d,m;
    scanf("%d %d", &d, &m);
    
    int result = birthday(n,s,d,m);
    printf("%d\n",result);
    
    free(s);
    return 0;
}