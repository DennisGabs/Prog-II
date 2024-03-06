# include <stdio.h>

void main(){
    int vect[8];

    for (int i = 0; i < 8; i++) {
        printf("Posicao %d do vetor: ", i + 1);
        scanf("%d", &vect[i]);
    }

    int maior = vect[0];
    int menor = vect[0];

    for (int j = 0; j < 8; ++j) {
        if(vect[j] < menor){
            menor = vect[j];
        }

        if(vect[j] > maior){
            maior = vect[j];
        }
    }


    int soma = maior + menor;
    printf("A soma do maior e menor valor do array eh: %d", soma);

}