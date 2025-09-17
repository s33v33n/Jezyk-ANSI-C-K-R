// reading line length

#include <stdio.h>

#define MAX_LENGTH 500

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
            printf("Nowy max: %s , dlugosc: %d\n", longest, length);
        }
    }

    return 0;
}

int my_getline(char line[], int limit){

    int c, i;

    for(i=0; i < (limit - 1) && ((c = getchar()) != EOF) && c != '\n'; i++){
        line[i] = c;
    }

    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';

    return (i);
}

void copy(char line[], char longest[]){

    int i = 0;

    while((longest[i] = line[i]) != '\0'){
        i++;
    }
}

