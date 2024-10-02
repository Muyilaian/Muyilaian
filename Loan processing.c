//program to find simple interest
/*
program to find simple interest 
Author Muyila ian
reg 101/G/24568/24
Date 01/09/2024
*/
//preprocessing directive scanf(" "):,printf(" ");
#include <stdio.h>
int main () {
        //Declarations and initialization of variables
        int age;
        int annual_income;
               
        printf("enter the age");
        scanf("%d",& age);
               
        printf("enter the annual_income");
        scanf("%d", & annual_income);
               
        if(age<21,annual_income<21000)
        printf("unfortunately we are unable to give you a loan");
               
        if(age>21,annual_income>21000)
        printf("congratulations you qualify for a loan");
               
               return 0;
  }             