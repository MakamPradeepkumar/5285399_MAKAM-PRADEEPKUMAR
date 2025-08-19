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

int charcompare(const void* a, const void* b){
    return (*(char*)a - *(char*)b);
}
char* gridchallenge(char grid[][101], int n){
    for(int i=0;i<n;i++){
        qsort(grid[i],strlen(grid[i]),sizeof(char), charcompare);
    }
    int len = strlen(grid[0]);
    for(int i=0;i<len;i++){
        for(int j=0;j<n-1;j++){
            if(grid[j][i]>grid[j+1][i]){
                
                return "NO";
            }
        }
    }
    return "YES";
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char grid[n][101];
        for(int i=0;i<n;i++){
            scanf("%s",grid[i]);
        }
        printf("%s\n",gridchallenge(grid,n));
    }
    return 0;
}
