#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){

    // for integers 

    printf("signed char max: %d\n", ((unsigned char) ~0 >> 1));
    printf("signed char min: %d\n", -(char)((unsigned char) ~0 >> 1));
    printf("unsigned char max: %d\n", ((unsigned char) ~0));
    printf("unsigned char min: %d\n", (char)((unsigned char) 0));
    printf("------------------\n");
    printf("signed short max: %d\n", ((unsigned short) ~0 >> 1));
    printf("signed short min: %d\n", -(short)((unsigned short) ~0 >> 1));
    printf("unsigned short max: %d\n", ((unsigned short) ~0));
    printf("unsigned short min: %d\n", (short)((unsigned short) 0));
    printf("------------------\n");
    printf("signed int max: %d\n", ((unsigned int) ~0 >> 1));
    printf("signed int min: %d\n", -(int)((unsigned int) ~0 >> 1));
    printf("unsigned int max: %u\n", ((unsigned int) ~0));
    printf("unsigned int min: %u\n", (int)((unsigned int) 0));
    printf("------------------\n");
    printf("signed long max: %d\n", ((unsigned long) ~0 >> 1));
    printf("signed long min: %d\n", -(long)((unsigned long) ~0 >> 1));
    printf("unsigned long max: %u\n", ((unsigned long) ~0));
    printf("unsigned long min: %u\n", (long)((unsigned long) 0));
    
    short start = 0;
    short previous = start;

    while(start >= previous){
        previous = start;
        start++;
    }

    printf("range: from %d to %d",start, previous);

    // for float (to be continoud soon)
    
    /*
    .
    .
    .
    */

    return 0;
}