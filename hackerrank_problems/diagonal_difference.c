
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
    int n;
    scanf("%d",&n);
    int matrix[n][n],s1=0,s2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        s1+=matrix[i][i];
        s2+=matrix[i][n-i-1];
    }
    printf("%d\n",abs(s1-s2));
    return 0;
    
}
