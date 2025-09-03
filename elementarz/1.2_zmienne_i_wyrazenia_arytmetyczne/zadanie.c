#include <stdio.h>
#include <stdint.h>

int main(){

    float fahr = 0;
    float celcs;

    uint8_t step = 20;
    uint16_t upper = 300;
    
    // printf("Farenheit\tCelcjus\n");
    
    // while(fahr <= upper){
    //     celcs = (5.0/9.0)*(fahr - 32); // teraz dla zmiennoprzecinkowych mozna wykonac 5.0/9.0 - jest to infomracja o float 
    //     printf("%3.1f\t\t%6.1f\n", fahr , celcs);

    //     //celcs = (5*(fahr - 32)/9); to jest koniecznosc dla liczb calkowitych
    //     //printf("%3d\t%6d\n", fahr , celcs); wypisywanie liczb jako liczba 3 i 6 cyfrowa 
    //     fahr += step;
    // }

    printf("Celcjus\tFarenheit\n");
    
    while(celcs <= upper){
        fahr = celcs*9.0/5.0 + 32 ;
        printf("%3.1f\t\t%6.1f\n", celcs, fahr);

        //celcs = (5*(fahr - 32)/9); to jest koniecznosc dla liczb calkowitych
        //printf("%3d\t%6d\n", fahr , celcs); wypisywanie liczb jako liczba 3 i 6 cyfrowa 
        celcs += step;
    }



    return 0;
}

/*
5/9 byloby zaokraglowe do 0
*/