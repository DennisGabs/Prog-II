#include <stdio.h>

double soma(double n1, double n2){
    return n1 + n2;
}

void mensagem(){
    printf("Dennis Lindo\n");
}

int main(){
    mensagem();

    double n1;
    printf("Digite o primeiro valor: ");
    scanf(" %lf", &n1);

    double n2;
    printf("Digite o segundo valor: ");
    scanf(" %lf", &n2);
    double sum = soma(n1, n2);
    printf("O valor da soma: %.2f", sum);
    return 0;
}