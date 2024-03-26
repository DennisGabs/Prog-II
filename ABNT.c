# include <stdio.h>
# include <stdlib.h>
#include <string.h>
void main(){
    char nome[20] = "Dennis Gabriel";
    char split[10][10];

    for (int i = 0; i < strlen(nome); ++i) {
        for (int j = 0; j < strlen(nome); ++j) {
            if ((char *) nome[j] == " ") {
                split[i][j] = nome[j];
            } else {
            }
        }
    }

    for (int i = 0; i < strlen(nome); ++i) {
        for (int j = 0; j < strlen(nome); ++j) {
            printf("%c", split[i][j]);
        }
        printf("\n");
    }
}