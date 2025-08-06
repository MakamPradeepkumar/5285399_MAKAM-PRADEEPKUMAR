 


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

void sorting(int arr[], int n){
    long int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[5];
    int n=5;
    long int sum=0;
    long int f,l;
    for(int i=0;i<5;i++){
        scanf("%d ",&arr[i]);
        sum+=arr[i];
        
    }
    sorting(arr,n);
    
    for(int i=0;i<5;i++){
        f=arr[0];
        l=arr[4];
    }
    int least = sum-l;
    int highest = sum-f;
    printf("%ld %ld \n" ,least , highest);
    return 0;
    
}
