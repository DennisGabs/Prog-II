#include <stdio.h>

void main(){
    int n1 = 85;
    int n2 = 907;
    long int soma = 0;
    int i;
    for(i = n1; i <= n2; ++i){
        if(i % 2 == 0){
            soma += i;
        }
    }
    printf("A soma final de todos os elementos entre %d e %d eh = %d", n1, n2, soma);
}