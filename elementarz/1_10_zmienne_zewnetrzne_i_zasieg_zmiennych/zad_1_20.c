#include <stdio.h>

#define TAB 8

int main(){

    int c;
    int position = 1; 
    int required_tabs = 0; 
    
    while((c = getchar()) != EOF){

        if(c == '\t'){
            required_tabs = TAB - (position - 1) % TAB;
            while(required_tabs > 0){
                putchar(' ');
                position++;
                required_tabs--;
            }

        }
        else if(c == '\n'){
            position = 1; 
            putchar(c);
        }
        else{
            position++;
            putchar(c);
        }

    }



}