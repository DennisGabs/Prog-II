# include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    double a = n;
    for (int i = 1; i < n; ++i) {
        a += ((double)n - (double)i/(double)(i+i));
    }
    printf("Valor de A eh = %.2f", a);
}