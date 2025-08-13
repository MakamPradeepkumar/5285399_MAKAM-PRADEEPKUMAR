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

int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
        int n;
        scanf("%d",&n);
        int m;
        scanf("%d",&m);
        int temp;
        if(n%2==0){
            temp =2;
        }
        else if(m==1){
            temp =2;
        }
        else{
            temp = 1;
        }
        printf("%d\n",temp);
    }
    return 0;
}