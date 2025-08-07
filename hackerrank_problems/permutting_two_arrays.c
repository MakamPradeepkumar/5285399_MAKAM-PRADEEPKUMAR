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

int compare_asc(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}
int compare_dsc(const void *a, const void *b){
    return *(int *)b-*(int *)a;
}
char* twoArrays(int k,int n,int* arr1,int* arr2){   
    qsort(arr1,n,sizeof(int),compare_asc); 
    qsort(arr2,n,sizeof(int),compare_dsc);

    for(int i=0;i<n;i++){
        if(arr1[i]+arr2[i]<k){
            return "NO";
        }
        
    }
    return "YES";
}

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,k;
        scanf("%d \n %d \n",&n,&k);
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr1[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&arr2[i]);
        }
        printf("%s\n", twoArrays(k,n,arr1,arr2));
        
    }
    return 0;
    
}
