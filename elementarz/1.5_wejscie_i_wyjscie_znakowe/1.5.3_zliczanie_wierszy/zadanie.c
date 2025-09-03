#include <stdio.h>

int main(){

    /*
    int n = 0;
    int c;

    while((c = getchar()) != EOF){
        if(c == '\n'){  // '\n' - stala znakowa, ktora jest tylko jednym znakiem, w ASCII = 10
            n++;
        }
    }

    printf("Ilosc nowych wierszy: %d", n);
    */

    // ZADANIE 1.8 - zliczanie znakow ' ' , '\t' , '\n'

    /*
    int c; 
    int space = 0, tab = 0, enter = 0; 

    while((c = getchar()) != EOF){

        if(c == ' '){
            space++;
        }
        else if (c == '\t'){
            tab++;
        }
        else if(c == '\n'){
            enter++;
        }
    }

    printf("spacje = %d, tabulacje = %d, entery = %d", space,tab, enter);
    */

    // ZADANIE 1.9 - przepisanie wejscia na wyjscie 

    /*
    int c;
    int lastc = 'a'; // znak rozny od ' ' , moga byc tez inne...
    
    while ((c = getchar()) != EOF)
    {*/
        
        //opcja 1 
        /*if(c == ' '){
            if(lastc == ' '){

            }
            else{
                putchar(c);
            }
        }
        else{
            putchar(c);
        }*/

        
        // opcja 2 - znacznie lepsza 
        /*
        if (c != ' ' || lastc != ' ') {
            putchar(c);
        }
        lastc = c;
    }
    */

    //ZADANIE 3 - zastepowanie znakow

    int c;

    while((c = getchar()) != EOF){
        if(c == '\t'){
            printf("\\t");
        }
        else if(c == '\?'){
            printf("\\?");
        }
        else if(c == '\\'){
            printf("\\\\"); // jeden znak \ jest zapisany jako \\ , wiec \\ jako \\\\ .
        }
        else{
            putchar(c);
        }
    }

    
    return 0;
}