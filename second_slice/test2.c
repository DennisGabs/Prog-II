#include <stdio.h>
#include <stdio.h>
#include <string.h>
void main(){
    /*Fazer um split, capturar a primeira letra de cada nome e retornar o último completo  o restante maísculo com ponto*/

    char nome[100];
    printf("Digite o seu nome: ");
    scanf("%s", nome);

    char *split = strtok(nome, " ");
    printf("%s", split);
}