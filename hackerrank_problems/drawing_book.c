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
    int p;
    scanf("%d",&p);
    int res;
    int n1= (p)/2;
    int n2= (n/2) -(p/2);
    res = ((n1<n2)?n1:n2);
    printf("%d",res);
    return 0;
}
