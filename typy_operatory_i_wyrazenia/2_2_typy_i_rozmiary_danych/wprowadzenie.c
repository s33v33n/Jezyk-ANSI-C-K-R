#include <limits.h>
#include <stdio.h>

int main(){

    printf("signed char max: %d\n", SCHAR_MAX);
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("signed short max: %d\n", SHRT_MAX);
    printf("signed short min: %d\n", SHRT_MIN);
    printf("signed int max: %d\n", INT_MAX);
    printf("signed int min: %d\n", INT_MIN);
    printf("signed long max: %ld\n", LONG_MAX);
    printf("signed long min: %ld\n", LONG_MAX);

    printf("unsigned char max: %d\n", UCHAR_MAX);
    printf("unsigned short max: %d\n", USHRT_MAX);
    printf("unsigned int max: %u \n", UINT_MAX);
    printf("unsigned long max: %lu \n", ULONG_MAX);

    // differences in size might occur in other computer systems
    // short and int must be at least 16 bits and int >= short 
    // long must be at least 32 bits and long >= int
    
    
    
    printf("float max: %e\n", __FLT_MAX__);
    printf("float min: %e\n", __FLT_MIN__);

    // these values are only positive!!!! 
    // if float is negative -> just sign bit is different 

    return 0;
}
