
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

bool is_panagram(const char *sentence){
    if(sentence == NULL){
        return false;
    }
    bool string[26]={false};
    int count = 0;
    
    for(int i=0;sentence[i] != '\0';i++){
        char c = tolower(sentence[i]);
        
        if(c>='a' && c<='z'){
            int index = c-'a';
            if(!string[index]){
                string[index]=true;
                count++;
            }
        }
    }
    return count==26;
}

int main(){
    char sentence[1000];
    
    fgets(sentence,sizeof(sentence),stdin);
    size_t len = strlen(sentence);
    if(len>0 && sentence[len-1]=='\n'){
        sentence[len-1]='\0';
        
    }
    if(is_panagram(sentence)){
        printf("pangram");
    }
    else{
        printf("not pangram");
    }
}