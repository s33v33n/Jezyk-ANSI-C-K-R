#include <stdio.h>

#define OUT 0   /* poza slowem */
#define IN 1    /* wewnatrz slowa */

/* Bez obslugi bledow*/

int main(){
    int c, nc = 0; // znaki
    int ne = 0, nw = 0; // enter , slowa
    int state; // aktualny stan polozenia 

    state = OUT; 


    // while((c = getchar()) != EOF){
    //     nc++;

    //     if(c == '\n'){
    //         ne++;
    //     }
    //     if(c == ' ' || c == '\n' || c == '\t'){
    //         state = OUT;
    //     }

    //     else if(state == OUT){ // ten warunek jest od razu pomijany, poniewaz wczesniej wykryto znak odstepu 
    //         state = IN;
    //         nw++;
    //     }
    
    // }
    // printf("Ilosc znakow: %d , ilosc slow: %d , ilosc wierszy: %d", nc, nw, ne);

    // ZADANIE 1.12 - slowo w nym wierszu 

    //state = OUT;
    while((c = getchar()) != EOF){

        // putchar(c);
        // if(c == ' ' || c == '\t' || c == '\n'){
        //     printf("\n"); 
        // }

        // lub 
        
        if(c == ' ' || c == '\t' || c == '\n'){

            printf("\n");
            state = OUT; 
        }
        else if (state == OUT){
            state = IN; 
            putchar(c);
        }
        else{
            putchar(c);
        }

        

    //printf("to jest c = %d", c);
    }

    return 0;
}