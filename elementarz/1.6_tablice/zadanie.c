#include <stdio.h>

int main(){

    /* Zliczanie cyfr, znakow bialych i innych znakow */

    int c, n_other = 0, n_white = 0;
    int n_digit[10] = {0};

    while((c = getchar()) != EOF){

        if('0' <= c && c <= '9'){
            n_digit[c - '0']++;
        }
        else if(c == ' ' || c == '\t' || c == '\n'){
            n_white++;
        }
        else{
            n_other++;
        }
    }

    printf("ilosc cyfr: ");
    for(int i=0; i < 10; i++){
        printf("%d ",n_digit[i]);
    }

    printf("bialych: %d", n_white);
    printf(" reszta: %d", n_other);
    


    return 0;
}