#include <stdio.h>

#define TAB 8

int main(){

    int c;
    int position = 1; 
    
    while((c = getchar()) != EOF){

        if(c == ' '){
            int count_spaces = 0;

            do{
                count_spaces++;
                c = getchar();

            }while(c == ' ');

            while(count_spaces > 0){

                int nearest_tab = TAB - (position - 1) % TAB; // starts from index 1 not 0 so need to difference 

                if(count_spaces >= nearest_tab){
                    putchar('\t');
                    count_spaces -= nearest_tab;
                    position = ((position - 1) / TAB + 1) * TAB + 1;
                }
                else{
                    putchar(' ');
                    count_spaces--;
                    position++;
                }
            }

            if (c != EOF) {
                if (c == '\n') {
                    putchar(c);
                    position = 1;
                } else {
                    putchar(c);
                    position++;
                }
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