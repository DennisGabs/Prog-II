# include <stdio.h>

void main(){
    int n1;
    printf("Type n1 value: ");
    scanf("%d", &n1);
    int n2;
    printf("Type n2 value: ");
    scanf("%d", &n2);


    int acc_negative = 0;
    int acc_positive = 0;
    int q_p = 0;
    int q_n = 0;
    int i = 0;
    for( i = n1; i <= n2; i++) {
        if (i < 0) {
            acc_negative += i;
            q_n += 1;
        } else {
            acc_positive += i;
            q_p += 1;
        }
    }
    float r1 =  (float) acc_negative / (float) q_n;
    float r2 =  (float) acc_positive / (float) q_p;

    printf("media negativos: %.2f\n", r1);
    printf("media positivos: %.2f", r2);
}

