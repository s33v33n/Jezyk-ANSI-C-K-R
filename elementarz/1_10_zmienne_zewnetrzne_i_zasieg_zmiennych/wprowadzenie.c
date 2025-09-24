#include <stdio.h>

#define MAXLINE 20

int max;                // recorded max 
char line[MAXLINE];     // current line 
char longest[MAXLINE];  // max as line 

int my_getline(void);      
void copy(void);        

int main(){

    int length; 

    max = 0;
    while((length = my_getline()) > 0){
        if(length > max){
            copy();
            max = length;
        }
    }

    if(max > 0){
        printf("Max line (max 19 chars): %s, length: %d", longest, max);
    }

    return 0;
}

int my_getline(void){

    int c;
    int i = 0; 

    extern char line[];

    while(((c = getchar()) != EOF) && c != '\n'){
        
        if(i < MAXLINE - 2){
            line[i] = c;
        }
        i++;
    }

    if(c == '\n'){
        if(i < MAXLINE - 1){
            line[i] = c;
        }
        i++;
    }

    

    if(i < MAXLINE){
        line[i] = '\0';
    }
    else{
        line[MAXLINE - 1] = '\0';
    }

    return i;
}

void copy(void){

    extern char line[], longest[];
    
    int i = 0;
    while((longest[i] = line[i]) != '\0'){
        i++;
    }  
}