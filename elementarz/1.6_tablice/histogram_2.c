#include <stdio.h>

#define CHARS 256

int main(){

    char chars_arr[CHARS] = {0};
    int c;

    while((c = getchar()) != EOF){
        chars_arr[c]++;
    }

    for(int i=0; i < CHARS; i++){
        if(chars_arr[i] > 0){
            if (i >= 32 && i < 127) {
                printf("\n%3d '%c': ", i, i);
                for(int j=0; j < chars_arr[i]; j++){
                    printf("-");
                }
            } else {
                printf("\n%3d    : ", i);
                for(int j=0; j < chars_arr[i]; j++){
                    printf("-");
                }
            }
        }
    }


}