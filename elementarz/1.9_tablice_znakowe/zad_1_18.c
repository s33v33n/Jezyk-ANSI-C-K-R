#include <stdio.h>

#define MAX_LENGTH 20 

int my_getline(char line[], int limit);
void copy(char line[], char line_to_print[]);

int main(){

    int length = 0, max = 0;
    char line[MAX_LENGTH];
    char line_to_print[MAX_LENGTH];
    
    while((length = my_getline(line, MAX_LENGTH)) >= 0){

        copy(line, line_to_print);
        if(line_to_print[0] != '\0'){
            printf("Pierwsze 19 znakow max: %s , ilosc znakow: %d\n", line_to_print, length);
        }
        
    }

    return 0;
}

int my_getline(char line[], int limit){

    int c, i;
    int chars_in_string = 0;

    for(i=0; ((c = getchar()) != EOF) && c != '\n'; i++){
        if(i < limit - 2){

            if(c != '\t' && c != ' '){
                line[i] = c;
                chars_in_string++;
            }
            else{
                i--;
            }
        }
        else if (c == '\t' || c == ' '){
            i--;
        }
    }



    if(c == '\n'){ // add '\n' and '\0'

        if(i < limit - 2){

            if(chars_in_string == 0 && c == '\n'){
                line[chars_in_string] = '\0';
            }
            else{
                line[chars_in_string] = c; // only for tests - this for '\n' sign
                chars_in_string++;
                line[chars_in_string] = '\0'; 
                i++; // '\n' is also a valid char 
            }
        }
    }
    
    else{ //add only '\0'
        chars_in_string++;
        line[chars_in_string] = '\0';
    }

    return (i);
}

void copy(char line[], char line_to_print[]){

    int i = 0;

    if(line[i] != '\n'){

        while((line_to_print[i] = line[i]) != '\0'){
            i++;
        }

    }
}

