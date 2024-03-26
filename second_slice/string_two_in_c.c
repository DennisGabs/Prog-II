# include <string.h>
# include  <stdio.h>
# include <stdlib.h>


void main(){
    char text[100] = "Dennis";
    char text2[100] =  "Dennis ";

    int t = strlen(text);
    if(strcmp(text, text2) == 0) {
        printf("Strings iguais");
    } else {
        printf("String diferentes");
    }

    printf("Tamanho da string text: %d", t);
}