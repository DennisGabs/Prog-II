# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void main(){
    char text[100];
    printf("Type your string: ");
    scanf("%s", text);

    int i= 0;
    int count_vogais = 0;
    for(i=0; i<= strlen(text); i++){
        if( text[i] == 'a' || text[i] == 'e' || text[i] == 'i'  || text[i] == 'o' || text[i] == 'u' ||
            text[i] == 'A' || text[i] == 'E' || text[i] == 'I'  || text[i] == 'O' || text[i] == 'U'){
            count_vogais += 1;
        }
    }

    printf("A variavel digitada tem %d vogais.", count_vogais);
}
