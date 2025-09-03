#include <stdio.h>

int main(){

    int n = 0; // long, aby nie przepelnic bufora dla int
    
    // zliczanie znakow opcja 1 (enter tez sie liczy jako znak)

    while(getchar() != EOF){
        n++;
    }

    printf("ilosc znakow wejsciowych = %d\n", n);

    // opcja 2
    
    double nc;

    for(nc = 0; getchar() != EOF ; nc++){

    }

    printf("ilosc znakow wejsciowych = %0.f\n", nc); // format wypisywania dla float i dopuble bez przecinka

    return 0;
}