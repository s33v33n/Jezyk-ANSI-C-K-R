#include <stdio.h>

void arg_change(int *pointer);
int some_useless_function(int x);

int main(){

    int temp = 20;
    int *addr_temp = &temp;

    printf("Value by refernce: %d , pointer address:%p\n", temp, (void*)addr_temp);
    printf("Value: %d power:%d\n", temp, some_useless_function(temp));
    printf("Changes...\n");
    arg_change(addr_temp);
    printf("Value after change: %d , pointer address:%p\n", temp, (void*)addr_temp);
    printf("Value: %d power:%d\n", temp, some_useless_function(temp));

    return 0;
}

void arg_change(int *addr_temp){
    *addr_temp = 30;
}

int some_useless_function(int arg){
    return (arg * arg);
}

