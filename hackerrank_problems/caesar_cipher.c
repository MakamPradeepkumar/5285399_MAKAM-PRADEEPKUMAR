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

void caesarcipher(char* s, int k){
    for(int i=0;s[i]!='\0';i++){
        char ch = s[i];
        if(islower(ch)){
            s[i]='a'+(ch-'a'+k)%26;
        }
        else if(isupper(ch)){
            s[i]='A'+(ch - 'A'+k)%26;
        }
    }
    printf("%s\n",s);
}

int main(){
    int n,k;
    char s[1000];
    scanf("%d",&n);
    getchar();
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]=0;
    scanf("%d",&k);
    caesarcipher(s,k);
    return 0;
    
}
