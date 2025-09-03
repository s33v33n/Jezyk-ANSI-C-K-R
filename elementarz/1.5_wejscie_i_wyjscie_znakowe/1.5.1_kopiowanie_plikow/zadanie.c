#include <stdio.h>

int main(){

    int c;
    printf("Witaj, podaj dowolny znak na klawiature\n");

    /*c = getchar();  // jesli nie ma juz danych do pobrania funkcja getchar daje na koniec strumienia wejsciowego EOF
                    // czyli end of file, specjlany znak oznaczajcy koniec danych znkowych
                    // Jesli uzywam getchar to dana zawsze musi byc int a nie char!!!!!
                    // funkcja ta dodaje na koniec EOF, czyli -1 co moze byc nieczytlene dla innych systemow

    while(c != EOF){ //teraz akurat nastepuje zamiana z na int, ale dlatego ze EOF to int, lecz blad jest caly czas obecny
        putchar(c);
        c = getchar();
    }*/

    // while ((c = getchar()) != EOF){ // lepszy zapis kopiowania -> jesli c nie jest koncem pliku to wipisz c 
    //     putchar(c);
    // }


    // Zadanie - getchar() moze miec 1 albo 0 

    printf(" c = %i",(c = (getchar() != EOF))); // wywolanie EOF (Ctrl + Z) daje 0, poniewaz EOF == EOF, a jak inny znak 
                                                // to daje 1 ponieważ inny_znak != EOF

    
    // wartosc EOF
    printf("\nEOF = %i wartosc w stdio.h ", EOF);



    return 0;
}