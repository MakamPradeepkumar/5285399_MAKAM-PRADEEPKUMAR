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
        int k;
        scanf("%d",&k);
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        
        int t1=-1,t2=-1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==k){
                    t1=i+1;
                    t2=j+1;
                    break;
                    
                }
            }
            if(t1!=-1)break;
        }
        printf("%d %d\n",t1,t2);
    }
    return 0;
}
