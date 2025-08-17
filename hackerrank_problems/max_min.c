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

int compare(const void *a,const void *b){
    return(*(int*)a-*(int*)b);
}
int maxmin(int k, int n, int* arr){
    qsort(arr,n,sizeof(int),compare);
    
    int min=INT_MAX;
    for(int i=0;i<=n-k;i++){
        int a=arr[i+k-1]-arr[i];
        
        if(a<min){
            min=a;
        }
    }
    return min;
}

int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    
    int res = maxmin(k,n,arr);
    printf("%d\n",res);
    return 0;
}