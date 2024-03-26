# include <stdio.h>
# include <stdlib.h>

void main(){
    int nums[10];
    int i, maior, menor;
    double media;
    double acumulador;
    for(i = 0; i< 10; i++){
        printf("Informe o valor do %do numero:", i+1);
        scanf("%d", &nums[i]);
        acumulador += nums[i];
        if(i == 0){
            maior =  nums[0];
            menor = nums[0];
        }
        if(nums[i] > maior){
            maior = nums[i];
        }
        if(nums[i] < menor){
            menor = nums[i];
        }
    }

    media = (double) acumulador /(double) (sizeof(nums)/ sizeof(nums[0]));

    printf("O maior valor eh: %d e o menor eh: %d\n", maior, menor);
    printf("A media eh: %.2f", media);
}