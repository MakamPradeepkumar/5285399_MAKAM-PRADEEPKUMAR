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

int sales(int n,int arr[]){
    int count[101]={0};
    int pairs = 0;
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<=100;i++){
        pairs += count[i]/2;
    }
    return pairs;
}

int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int count =0;
    int result = sales(n,arr);
    printf("%d\n",result);
    return 0;
    
}