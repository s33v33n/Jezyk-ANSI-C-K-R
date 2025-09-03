#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20 

int main(){

    int fahr;
    
    printf("Farenheit\tCelcjus\n");
    
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP){
        printf("%3.1d\t\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32)); // na koncu jest od razu konwersja do float 
    }

    return 0;
}
