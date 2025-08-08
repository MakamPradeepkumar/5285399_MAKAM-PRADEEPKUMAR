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

int* countingsort(int arr_count,int* arr,int* result_count){
    *result_count = 100;
    int* freq = (int*) calloc(100,sizeof(int));
    
    for(int i=0;i<arr_count;i++){
        freq[arr[i]]++;
    }
    return freq;
}

int main(){
    int n;
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int result_count;
    int* result = countingsort(n,arr,&result_count);
    
    for(int i=0;i<result_count;i++){
        printf("%d ",result[i]);
    }
    
    free(arr);
    free(result);
    return 0;
}
