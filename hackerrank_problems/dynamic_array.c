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
    int n,q;
    scanf("%d %d", &n, &q);
    
    int** arr=(int**)malloc(n*sizeof(int*));
    int* sizes=(int*)calloc(n,sizeof(int));
    int* capacities=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++){
        arr[i]=NULL;
    }
    int last = 0;
    for(int i=0;i<q;i++){
        int type,x,y;
        scanf("%d %d %d",&type,&x,&y);
        int idx=(x^last)%n;
        
        if(type == 1){
            if(sizes[idx]==capacities[idx]){
                capacities[idx]=capacities[idx]== 0?1 : capacities[idx]*2;
                arr[idx]=realloc(arr[idx],capacities[idx]*sizeof(int)); 
            }
            arr[idx][sizes[idx]++]=y;
        }
        else if(type == 2){
            last = arr[idx][y%sizes[idx]];
            printf("%d\n",last);
        }
    }
    for(int i=0;i<n;i++){
        free(arr[i]);
    }
    free(arr);
    free(sizes);
    free(capacities);
    
    return 0;
}