#include <stdio.h>

int power(int base, int n); // declaration + parameters (function definition)
float celcs_to_fahr(float celcs);



int main(){

    printf("power: (2,8): %d , (2,0): %d , (0,8): %d\n", power(2,8), power(2,0), power(0,8));
    printf("Celcs to fahr (20):%3.1f", celcs_to_fahr(20));

    return 0;
}

float celcs_to_fahr(float celcs){
    return (celcs*9.0/5.0 + 32);
}

int power(int base, int n){

    int result = 1;
    for(int i=0; i < n; i++){
        result *= base;
    }

    return result;
}