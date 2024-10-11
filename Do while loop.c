//program for do while loop
/*
Author:Muyila Wekesa ian
Reg.No:CT101/G/24568/24
*/
#include <stdio.h>

int main() {
    int i,sum=0,start,stop;
    
    printf("Enter the value for when to start:");
    scanf("%d",&start);
    
    printf("Enter the value for when to stop:");
    scanf("%d",&stop);
    do{
        printf("%d",i);
        i++;
        sum+=i;
    }while(i<=stop);
    printf("The sum is %d",sum);

    return 0;
}