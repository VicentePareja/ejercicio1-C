#include <stdio.h>

int main() {
    
    int rows;
    printf("Enter the amount of rows: ");
    scanf("%d", &rows);
    printf("Piramid, %d!\n", rows);


    for (int i = 0; i <= rows; i++) {

        for (int j = rows - i; j >= 0; j--){
            printf(" ");
        }

        for (int j = 1; j <= i; j += 1){
            printf("*");
        }
        for (int j = 0; j <= i; j += 1){
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}