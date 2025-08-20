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

const char* balanced_sum(int n,int arr[]){
    int total_sum =0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int left_sum = 0;
    for(int i=0;i<n;i++){
        int right_sum = total_sum - left_sum - arr[i];
        if(left_sum == right_sum){
            return "YES";
        }
        left_sum+=arr[i];
    }
    return "NO";
    
}


int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%s\n",balanced_sum(n,arr));
    }
    return 0;
    
    
}


