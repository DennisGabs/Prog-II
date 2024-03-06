# include <stdio.h>

int main(){
    int nums[3][4] = {{1,2,3, 4}, {4,5,6, 7},{7,8,9,10} };
    int vect[2] = {0,1};
    printf("MATRIZ: \n");
    for(int i=0; i< 3; i++){
        for(int j=0; j< 4; j++){
            printf("%d - ", nums[i][j]);
        }
        printf("\n");
    }

    printf("\nVETOR: \n");
    for (int i = 0; i< 2; i++){
        printf("%d - ", vect[i]);
    }
}