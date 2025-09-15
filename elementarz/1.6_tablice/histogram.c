#include <stdio.h>

#define IN 1 
#define OUT 0
#define MAX_WORDS 16
#define MAX_LENGTH 16

int main(){

    // ZADANIE 1.13 
    
    printf("Maksymalna dlugosc slowa to 16 znakow\n");
    printf("Program tworzy histogram dlugosci slow wejsciowych:\n");
    
    int c, nc = 0, overflow = 0;
    int words_counter = 0;

    int words[MAX_WORDS] = {0}; 
    int state = OUT;

    while((c = getchar()) != EOF){
        
        if('A' <= c && c <= 'Z' || 'a' <= c && c <= 'z'){
            nc++;
            state = IN;
        }
        else if(c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        }

        if(state == OUT){
            if(nc > MAX_LENGTH){
                overflow++;
            }
            else{
                words[nc]++;
            }
            nc = 0;
            state = IN;
            words_counter++;
            if(words_counter == MAX_WORDS){
                printf("przekroczono ilosc slow!\n");
                break;
            }
        }
    }

    for(int i=0; i < MAX_WORDS; i++){
        
        if(words[i] > 0){
            printf("\n%d:",i);
        }
        for(int j=0; j < words[i]; j++){
            printf("-");
        }
    }
    printf("\noverflow:%d\n", overflow);

    return 0;
}