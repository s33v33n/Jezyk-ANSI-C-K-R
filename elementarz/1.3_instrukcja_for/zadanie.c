#include <stdio.h>
#include <stdint.h>

int main(){

    int fahr;
    
    printf("Farenheit\tCelcjus\n");
    
    for (fahr = 0; fahr <= 300; fahr += 20){
        printf("%3.1d\t\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32)); // na koncu jest od razu konwersja do float 
    }

    printf("\nFarenheit\tCelcjus\n");
    
    for (fahr = 300; fahr >= 0; fahr -= 20){
        printf("%3.1d\t\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32)); // na koncu jest od razu konwersja do float 
    }

    return 0;
}
