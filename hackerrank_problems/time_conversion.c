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
    char time[11];
    scanf("%10s", time);
    
    int hour = (time[0] - '0')*10 +(time[1] - '0');
    
    if(time[8] == 'A'){
        if(hour == 12){
            hour =0;
        }
        
    }
    
    else if(hour != 12){
        hour+=12;
    }
    printf("%02d:%c%c:%c%c\n",hour,time[3],time[4],time[6],time[7]);
    return 0;
}