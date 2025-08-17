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

int isPowerOfTwo(unsigned long long n) {
    return (n != 0) && ((n & (n - 1)) == 0);
} 

    
unsigned long long highestPowerOf2(unsigned long long n) {
    unsigned long long power = 1;
    while (power * 2 < n)
    power *=2;
    return power;
}
void counterGame(unsigned long long n) {
    int moves = 0;
    while (n>1) {
        if (isPowerOfTwo(n)) {
            n =n /2;
        } else {
            n = n - highestPowerOf2(n);
        }
        moves++;
    }
    if (moves % 2 == 1)
    printf("Louise\n");
else
    printf("Richard\n");
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned long long n;
        scanf("%llu", &n);
        counterGame(n);
    }
    return 0;
}
