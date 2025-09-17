#include <stdio.h>

#define MAX_LENGTH 10 // string max length 

int my_getline(char line[], int limit);
void copy_and_reverse(char line[], char line_to_print[], int line_length);

int main(){

    int length = 0;
    char line[MAX_LENGTH];
    char line_to_print[MAX_LENGTH];
    
    while((length = my_getline(line, MAX_LENGTH)) > 0){

        copy_and_reverse(line, line_to_print, length);
        printf("Pierwsze 9 odwroconych znakow: %s , ilosc znakow: %d\n", line, length);
    }

    return 0;
}

int my_getline(char line[], int limit){

    int c; // for chars  
    int i; // chars counter 

    int chars_in_string = 0; // for chars possible to save

    for(i=0; ((c = getchar()) != EOF) && c != '\n'; i++){
        
        if(i < limit - 2){

            line[i] = c;
            chars_in_string++;
        }
    }

    if(c == '\n'){ // add '\n' and '\0'

        if(i < (MAX_LENGTH - 1)){
            line[chars_in_string] = c;
        }

        i++; // '\n' is also a valid char 
    }
    
    chars_in_string++;
    line[chars_in_string] = '\0';

    return (i);
}

void copy_and_reverse(char line[], char line_to_print[], int line_length){

    int i = 0;

    while(line[i] != '\0'){
        i++;
    }

    i--;

    // if(line[i] == '\n'){         uncomment to ignore '\n'
    //     i--;
    // }

    int j = 0; 
    char temp = ' ';

    while(j < i){

        temp = line[j];
        line[j] = line[i];
        line[i] = temp;

        i--;
        j++;
    }
}


