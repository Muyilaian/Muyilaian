// An array is a data structure that stores a collection of elements of the same data types in contiguous memory location
 


//Array program 
/*
Author:Muyila Wekesa Ian 
Reg:CT101/G/24568/24
Date:7/7/24
*/
#include <stdio.h>

int main() {
    int scores[2][2] = {{{65, 92},{84, 72}}, {{35, 70},{59, 67}}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}