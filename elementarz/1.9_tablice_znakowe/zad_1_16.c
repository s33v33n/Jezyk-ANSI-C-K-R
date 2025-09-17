#include <stdio.h>

#define MAX_LENGTH 10 // shows only 8 chars last two are '\n' and '\0' 

int my_getline(char line[], int limit);
void copy(char line[], char longest[]);

int main(){

    int length = 0, max = 0;
    char line[MAX_LENGTH];
    char longest[MAX_LENGTH];
    
    while((length = my_getline(line, MAX_LENGTH)) > 0){

        if(length > max){
            max = length;
            copy(line, longest);
            printf("Pierwsze 8 znakow max: %s , ilosc znakow: %d\n", longest, length);
        }
    }

    return 0;
}

int my_getline(char line[], int limit){

    int c, i;
    int chars_in_string = 0;

    for(i=0; ((c = getchar()) != EOF) && c != '\n'; i++){
        if(i < limit - 2){
            line[i] = c;
            chars_in_string++;    
        }
    }

    if(c == '\n'){ // add '\n' and '\0'
        if(i < limit - 2){
            line[chars_in_string] = c; // only for tests - this for '\n' sign
            chars_in_string++;
            line[chars_in_string] = '\0'; 
        }
        i++; // '\n' is also a valid char 
    }
    else{ //add only '\0'
        chars_in_string++;
        line[chars_in_string] = '\0';
    }

    return (i);
}

void copy(char line[], char longest[]){

    int i = 0;

    while((longest[i] = line[i]) != '\0'){
        i++;
    }
}

