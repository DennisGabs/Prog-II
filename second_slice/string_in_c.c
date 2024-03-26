# include <stdio.h>
# include <string.h>
# include <stdlib.h>

void main(){
    printf("Digite um nome: ");
    char nome[7];
    gets(nome);
    printf("%s", nome);
}
