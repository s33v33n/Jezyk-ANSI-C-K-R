#include <stdio.h>

void arg_change(int *pointer);

int main(){

    int temp = 20;
    int *addr_temp = &temp;

    printf("Value by refernce: %d , pointer address:%p\n", temp, (void*)addr_temp);
    printf("Changes...\n");
    arg_change(addr_temp);
    printf("Value after change: %d , pointer address:%p", temp, (void*)addr_temp);

    return 0;
}

void arg_change(int *addr_temp){
    *addr_temp = 30;
}

