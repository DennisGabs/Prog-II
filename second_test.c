# include <stdio.h>

void main(){
    int vect[4] = {2,1, 5, 6};
    int vect2[4] = {};
    for(int i = 0 ; i < 4; i++){
        vect2[i] = vect[i] + 6;
    }

    for(int i = 0 ; i < 4; i++){
        printf("%d - ", vect2[i]);
    }
}