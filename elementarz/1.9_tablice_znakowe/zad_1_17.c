#include <stdio.h>

#define MIN_LENGTH 5 // shows only 8 chars last two are '\n' and '\0' 
#define MAX_LENGTH 20

int my_getline(char line[], int limit);

int main(){

    int length = 0;
    char line[MAX_LENGTH];
    
    while((length = my_getline(line, MAX_LENGTH)) > 0){

        if(length > MIN_LENGTH){
            printf("Ta linia (max 19 wyswietlanych znakow): %s ma wiecej niz %d znkow. Posiada ich: %d\n", line, MIN_LENGTH, length);
        }
    }

    return 0;
}

int my_getline(char line[], int limit){

    int c, i;
    int chars_in_line = 0;

    for(i=0; ((c = getchar()) != EOF) && c != '\n'; i++){
        
        if((i < limit - 2)){
            printf("chars_in_line: %d , i: %d\n", chars_in_line, i);
            line[chars_in_line++] = c;
        }
    }

    if(c == '\n'){ // add '\n' and '\0'
        if(chars_in_line < limit - 1) { // if there is free block insert '\n'
            line[chars_in_line++] = c;
        }
        i++; // increment for one more sign 
    }
    line[chars_in_line] = '\0'; // end the string
    return (i);
}

